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


panasonic = Tv()
#panasonic.current_channel()
panasonic.turn_on()
panasonic.current_luminosity()
panasonic.change_luminosity(luce = 40)
panasonic.current_luminosity()




