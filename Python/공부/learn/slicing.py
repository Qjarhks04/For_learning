a = "20231219HONG"
year = a[:4]
month = a[4:6]
day = a[6:8]
FirstName = a[8:]

print(year)
print(month)
print(day)
print(FirstName)

'''
이건 안 됨
a = 'Pithon'
a[1] = y

이걸로 해야함
print(a[:1] + 'y' + a[2:])
'''