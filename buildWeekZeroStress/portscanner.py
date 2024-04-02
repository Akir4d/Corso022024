import socket
import sys

target = input("Inserisci l'indirizzo IP da scansire: ")
portrange = input("Inserisci il port range da scansire (es 5-200): ")

lowport = int(portrange.split('-')[0])
highport = int(portrange.split('-')[1])

print("Scansisco l'host ", target, "dalla porta", lowport, "a", highport)
status_p = 0
for port in range(lowport, highport + 1):
	s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	s.settimeout(1)
	if(status_p != 0):
			sys.stdout.write("\033[A")
			sys.stdout.write("\033[K")
			status_p = 0
	status = s.connect_ex((target, port))
	if (status == 0):
		print('*** Porta', port, ' - APERTA ***')
	else:
		print('Porta', port, ' - CHIUSA', status)
		status_p = status
	s.close()
