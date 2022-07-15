#uso dei decoratori in python e dell'inheritage: esempi ed esercizi

import math

class Particle:

    def __init__(self,mass,charge = 0,name = None, momentum = 0.):
        """class costructor"""
        self.mass = mass # in Mev
        self.charge = charge # in e unit
        self.name = name
        self.momentum = momentum # in Mev/c
    def energy(self):
        "return the energy of the particle in Mev"
        return math.sqrt(self.momentum**2. + self.mass**2.)

class Electron(Particle):
    """Class describing an electron. We inherit from particle class"""
    def __init__(self,momentum = 0.):
        """Derived class from particle class"""
        Particle.__init__(self, 0.511,-1,'e-',momentum)
e1 = Electron(momentum=1.)
print('Energy of {} is {:.4f} Mev \n'.format(e1.name,e1.energy()))

"""Sezione sui decoratori"""

def funzione_decoratore(funzione_parametro):
    def wrapper():
        """ wrapper significa 'incarto, confezione'"""
        print("...roba da fare prima dei eseguire la funzione ")
        funzione_parametro()
        print("... codice da eseguire dopo di 'funzione_parametro'\n")
        #non ritorno nulla qui
    return wrapper
def mia_funzione():
    print("Hello Word!")
#qui, quando decoro la funzione con il decoratore, a sinistra non devo mettere ()!!!
mia_funzione = funzione_decoratore(mia_funzione)

mia_funzione()

"""sintassi di come funziona tipicamente un decoratore, la decorazione si effettua solamente tramite @decoratore. Quello che succede è sostituire una funzione con un'altra, legata alla prima"""

@funzione_decoratore
def mia_funzione():
    print("Hello Word!")

mia_funzione()