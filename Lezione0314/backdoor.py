import socket, platform, os

SRV_ADDR = ""
SRV_PORT = 1234

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((SRV_ADDR, SRV_PORT))
s.listen(1)
connection, address = s.accept()
tosend = ""
print ("Connesso con: ", address)
running = True
while running:
	try:
		data = connection.recv(1024)
	except: continue

	if(data.decode('utf-8').strip() == '1'):
		tosend = platform.platform() + " " + platform.machine() + "\n"
		connection.sendall(tosend.encode())
	elif(data.decode('utf-8').strip() == '2'):
		connection.sendall(b'Path: ')
		data = connection.recv(1024)
		try:
			filelist =  os.listdir(data.decode('utf-8').strip())
			tosend = ""
			for x in filelist:
				tosend += "," + x
			tosend += '\n'
		except:
			tosend = "Wrong path"
		connection.sendall(tosend.encode())
	elif(data.decode('utf-8').strip() == '0'):
		connection.close()
		connection, address = s.accept()
	elif(data.decode('utf-8').strip() == '9'): #delete after debug
		running = False

if connection: connection.close()
s.close()


