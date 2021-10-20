import numpy

#create a list from a dictionary and then append a new element
dictionary = {"brand" : "ford" , "model" : "mustang", "year" : 1964}

x = [dictionary[z] for z in dictionary.keys()]
print(x) ; x.append("not restaured") ; print(x)

