import socket, platform, os

SRV_ADDR = ""
SRV_PORT = 1234

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
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

	c = data.decode('utf-8').strip()
	if(c == '1'):
		tosend = platform.platform() + " " + platform.machine() + "\n"
		connection.sendall(tosend.encode())
	elif(c == '2'):
		connection.sendall(b'Path: ')
		data = connection.recv(1024)
		try:
			filelist =  os.listdir(data.decode('utf-8').strip())
			tosend = ",".join(filelist) + '\n'
		except:
			tosend = "Wrong path"
		connection.sendall(tosend.encode())
	elif(c == '0'):
		connection.close()
		connection, address = s.accept()
	elif(c == '9'): running = False #delete after debug

if connection: connection.close()
s.close()
