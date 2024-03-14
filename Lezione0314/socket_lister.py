import socket

SRV_ADDR = "192.168.1.145"
SRV_PORT = 44444

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((SRV_ADDR, SRV_PORT))
s.listen(1)
print("Sto ascoltando le connessione sulla porta:", SRV_PORT)
connection, address = s.accept()
print("Client collegato con l'indirizzo:", address)
while True:
	data = connection.recv(1024)
	if not data: break
	print(data.decode('utf-8'))

connnection.close()
