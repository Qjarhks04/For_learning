n = int(input())
num = input().split()
total = []

for i in range(n):
    total.append(int(num[i]))
a = 10000
for i in range(n):
    a = min(a, total[i])

print(a)