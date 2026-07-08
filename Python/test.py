#함수로 스왑
def swap(a, b):
    return b, a

a, b = 10, 20
print("스왑전 : ", a, b)
print("스왑후 : ", swap(a, b))

#더 간편한 스왑(파이썬)

c, d = 50, 100
print("스왑 전 : ", c, d)
d, c = c, d
print("스왑 후 : ", c, d)
