PI = 3.141592

class Circle():
    def __init__(self, radius):
        self.radius = radius
    def Perimeter(self):
        return PI * self.radius * self.radius
    def Area(self):
        return 2 * PI * self.radius
        