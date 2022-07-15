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
