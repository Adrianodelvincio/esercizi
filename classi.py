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
'''
#panasonic.luminosity = 50 ; print(panasonic.luminosity)
panasonic.change_channel(7)
panasonic.current_channel()
panasonic.change_channel(48)
panasonic.current_channel()


#using the costructor

class Watch:

    def __init__(self,owner):
        print("Creating a watch instance...")
        self.model = "Sellita sw200"
        self.owner = owner

    def print_info(self):
        "print model and owner"
        message = 'this watch is owned by {}, model {}'
        print(message.format(self.owner,self.model))

orologio1 = Watch('Marco')
orologio1.print_info()
'''