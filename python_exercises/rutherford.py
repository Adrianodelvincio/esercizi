import numpy as np
import matplotlib.pyplot as plt


alpha = 1/137 

def rutherford(theta,Ek):
	return alpha**2/(16*(Ek**2)*np.sin(theta/2)**4)

x = np.linspace(np.pi/50,np.pi/4,200) ; Ek = [75,100,150]
fig, ax = plt.subplots()
plt.xlim(0.05,0.25)
print(x[0], x[len(x)-1],rutherford(x,Ek[0]))
plt.xlabel("theta [rad]") ; plt.ylabel("Rutherford cross section [1/[keV**2]]")
ax.plot(x,rutherford(x,Ek[0]),linestyle = "--", label = 'Ek = %.2f keV' %Ek[0])	
ax.plot(x,rutherford(x,Ek[1]),linestyle = "--", label = 'Ek = %.2f keV' %Ek[1])	
ax.plot(x,rutherford(x,Ek[2]),linestyle = "--", label = 'Ek = %.2f keV' %Ek[2])	
leg = ax.legend()
plt.show()
