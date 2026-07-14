import random

a = []

for i in range(100):        
    a.append(random.randint(1, 11))

for j in range(1, 11, 1):
    c = a.count(j)
    print(f"{j}", end = ' ')
    for k in range(c):
        print('*', end = ' ')
    print(f" 총{k}개", end = ' ')
    print()
    