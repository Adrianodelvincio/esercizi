import numpy
'''
#create a list from a dictionary and then append a new element
dictionary = {"brand" : "ford" , "model" : "mustang", "year" : 1964}

x = [dictionary[z] for z in dictionary.keys()]
print(x) ; x.append("not restaured") ; print(x)
'''
#create the first class, describing television

class Tv:
    #convention: starting class name with an uppercase
    channel = None
    luminosity = None

    def turn_on(self,canale = 1, luce = 50): #class methods
        ''' all the class methods get the object instanxe as the first argumemt'''
        print("Turning on {}" .format(self))
        print('showing channel {}'.format(canale))
        self.channel = canale
        self.luminosity = luce
    def change_channel(self,canale):
        self.channel = canale
    def current_channel(self):
        print("Showing channel {}" .format(self.channel))
    def change_luminosity(self,luce):
        self.luminosity = luce
    def current_luminosity(self):
        print("luminosity {}".format(self.luminosity))

class Television:

    def __init__(self,owner):
        "class constructor"
        self._owner = owner #owner it's private, someone should not access

    @property
    def owner(self):
        return self._owner

    @owner.setter
    def owner(self,new_owner):
        #Adesso, siccome l'attributo è privato, restituiamo che non è modificabile
        print("Nope {}, you can not change the owner" .format(new_owner))


tv = Television('Batman')
print('this tv belong to {}' .format(tv.owner))
tv.owner = 'Joker'
print('this tv belong to {}' .format(tv.owner))



