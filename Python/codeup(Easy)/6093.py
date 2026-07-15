n = int(input())
num = input().split()
total = []

for i in range(n):
    total.append(int(num[i]))

total.reverse()

for i in range(n):
    print(total[i], end = ' ')