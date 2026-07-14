class FourCar:
    def __init__(self, first, second):
        self.first = first
        self.second = second
    # def setdata(self, first, second):
    #     self.first = first
    #     self.second = second
    def add(self):
        return self.first + self.second
    def sub(self):
        return self.first - self.second
    def mul(self):
        return self.first * self.second
    def div(self):
        return self.first / self.second

def main():
    a = FourCar(4, 2)
    b = FourCar(7, 5)
    print(a.add())
    print(b.add())
    print(a.sub())
    print(b.sub())
    print(a.mul())
    print(b.mul())
    print(a.div())
    print(b.div())

main()