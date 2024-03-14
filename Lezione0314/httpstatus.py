import http.client

host = input("Inserire host/IP del sistema target: ")
port = input("Inserire la porta del sistema target (delfault: 80): ")

if(port == ""):
	port = 80
else:
	port = int(port)

try:
	connection = http.client.HTTPConnection(host, port)
	connection.request('OPTIONS', '/')
	response = connection.getresponse()
	print ("Lo status e': ", response.status)
	methods_enabled = response.getheader('Allow')
	print ("I metodi abilitati sono: ", methods_enabled)
	connection.close()
except ConnectionRefusedError:
	print ("Connessione Fallita")
