import numpy as np
from matplotlib import pyplot as plt

mu = 0.5 ; m = 1 ; N = 100000

xmax = np.random.uniform(mu,mu + m/2,N)
xmin = np.random.uniform(mu- m/2, mu,N)
'''
def h(a,b):
    return 2*a + 2*b

print(np.array([ h(y,0) for y,z in xmax]))
'''
def f(xmax,xmin,mu,m, n = 4):

    p = 2*np.absolute((xmax + xmin)/2 - mu)/(xmax - xmin)
    pp = 2*p*(1-p) + p**2

    pmax = 4*(xmax)**(3)/m**4
    pmin = (3)*(xmax - xmin)**(2) / (xmax)**(3)
    #print(xmax,pmax,xmin,pmin)
    return pp * pmax * pmin

def Max_mu(xmin,mu,m, n = 4):
    xmax = mu

    p = 2*np.absolute((xmax + xmin)/2 - mu)/(xmax - xmin)
    pp = 2*p*(1-p) + p**2


    pmax = 1/16
    pmin = (n-1)*(mu - xmin)**(n-2) / (m/2)**(n-1)
    return pp * pmax * pmin

def Min_mu(xmax,mu,m, n = 4):
    xmin = mu
    p = 2*np.absolute((xmax + xmin)/2 - mu)/(xmax - xmin)
    pp = 2*p*(1-p) + p**2
    pmax = n*(xmax)**(n-1)/m**n
    pmin = (xmax - mu)**3 /(xmax - (mu - m/2))**3
    return pp * pmax * pmin

montecarlo = np.array([ f(x,y,mu,m) for x,y in zip(xmax,xmin) ])
#print(montecarlo)
xmin = np.random.uniform(mu- m/2, mu,N)
montecarlo1 = np.array([ Max_mu(x,mu,m) for x in xmin ])
xmax = np.random.uniform(mu,mu + m/2,N)
montecarlo2 = np.array([ Min_mu(x,mu,m) for x in xmax ])
result = (m/2 * m/2)*np.mean(montecarlo)
result1 = (m/2)*np.mean(montecarlo1)
result2 = (m/2)*np.mean(montecarlo2)
print(result, result1 ,result2)
print("risultato :  %3f " %(result + result1 + result2))



