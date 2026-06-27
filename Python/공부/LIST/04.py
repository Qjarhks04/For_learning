a = [1,2,3]
b = a # b는 a를 참조하고 있음
a[2] = 9
print(a)
print(b)

c = a.copy() # c는 a를 복사한 것
a[2] = 3
print(a)
print(b)
print(c)