
def cambia_valore_x(z):
	'''
	Global serve rendere un variabile globale
	in parole povere vede se all'esterno c'e' una variabile
	con lo stesso nome e sincronizza il valore temporaneo
	con quello esterno 
	'''
	global x
	x = z

x = 10

print ("Lo stato di x e':", x)
cambia_valore_x(3)
print ("Lo stato di x e':", x)

