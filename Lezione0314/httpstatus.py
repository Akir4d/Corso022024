import http.client

host = input("Inserire host/IP del sistema target: ")
port = input("Inserire la porta del sistema target (delfault: 80): ")

if(port == ""):
	port = 80
else:
	port = int(port)

try:
	connection = 0
	if (port == 443):
		connection = http.client.HTTPSConnection(host, port)
	else:
		connection = http.client.HTTPConnection(host, port)
	connection.request('OPTIONS', '/')
	response = connection.getresponse()
	print ("Lo status e': ", response.status)
	if response.status in (301, 302, 303, 307, 308):
		redirect = response.getheader('Location')
		print (f"Reindirizzamento ({response.status}) a: {redirect}")
	else:
		methods_enabled = response.getheader('Allow')
		print ("I metodi abilitati sono: ", methods_enabled)
	connection.close()
except ConnectionRefusedError:
	print ("Connessione Fallita")
