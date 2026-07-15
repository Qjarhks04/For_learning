parking = []
a, b = 0, 0
for i in range(22):
    parking.append(0)

#첫날
for i in (0, 2, 5, 7, 10, 13, 15, 18, 20):
    parking[i] += 1
#둘째 날
for i in (2, 4, 7, 9, 10, 13, 15, 17, 20):
    parking[i] += 1
#결과
for i in range(len(parking)):
    if parking[i] == 0:
        a += 1
    elif parking[i] == 2:
        b += 1

print(f"{a} {b}")