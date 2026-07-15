num = int(input())
total = 0

for i in range(num + 1):
    total += i
    if total >= num:
        print(i)
        break