'''Questo programma serve per calcolare attraverso i metodi di montecarlo l'efficacia dell'algoritmo di maximum likelihood extimator
del problema dello 01/02/2018 '''


import numpy as np
from matplotlib import pyplot as plt

# statistica che esploriamo
N = 1
M = 50000 # numero delle domande
# dati del problema
Q = 5 ; mu = 0.5; a = 1

def function(xmax):
	return (xmax)**4

###
occorrenze = np.zeros(N)
for k in range(0,N):
	max_occ = np.zeros(M) # array che salva il massimo
	min_occ = np.zeros(M) # array che salva il minimo
	answer = np.zeros(M) # array che salva la risposta corretta
	student_ans = np.zeros(M) #salva risposta dell'algoritmo
	counter = 0 # salva il numero di risposte corrette

	distance = np.zeros(M)
	for j in range(0,M):
		x = np.random.uniform(mu - a/2, mu + a/2,Q) ;
		i = round(np.random.uniform(0,Q-1)); x[i] = mu
		answer[j] = i # mi salvo la risposta corretta
		max_occ[j] = np.max(x)  #plottiamo la distribuzione del massimo
		min_occ[j] = np.min(x)

		#ALGORITMO DI MASSIMA LIKELIHOOD
		index = 0 # implemento variabile che contiene l'indice dell'elemento restituito dall'algoritmo
		cmt = [100000,0] #valore della larghezza a, indice punto che minimizza distanza, vengono aggiornati entrambi.
		for h in range(0,Q):
			if (cmt[0] >= 2*max(x[h] - x.min(),x.max() - x[h])):
				cmt[0] = 2*max(x[h] - x.min(),x.max() - x[h])
				cmt[1] = h
		student_ans[j] = cmt[1]

		distance[j] = (np.max(x) + np.min(x))/2 - x[cmt[1]]

		#print(x,cmt[1])
	#verifico quante domande sono corrette
	Probability = np.sum(student_ans == answer)
	occorrenze[k] = Probability
	#print(Probability)


#plt.hist(occorrenze,bins = 100 ,density = True, histtype = 'step')
#plt.show()
#plt.hist((max_occ + min_occ) / 2, bins =  100 , histtype = 'step',density = True )
#plt.hist(distance)
plt.hist(min_occ, bins = 100, density = True)
plt.plot()
plt.show()

