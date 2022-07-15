import math

class vector2d:
    "class rapresenting a vector, we use properties to define module and angle"

    def __init__(self,module,angle):
        self.module = float(module)
        self.angle = float(angle)

    @property
    def x(self):
        return self.module * math.cos(self.angle)

    @property
    def y(self):
        return self.module * math.sin(self.angle)

    @x.setter
    def x(self,x):
        self.module, self.angle = math.sqrt(x**2 + self.y**2), math.atan2(self.y,x)

#ora posso chiamare x e y senza che usi ()

v = vector2d(1,math.pi)
print(v.x,v.y)
v.x = 0.5
print(v.x,v.y)