num = int(input())
total = 0
if num <= 100000000:
    for i in range(1, num+1):
        total += i
        if total >= num:
            break

print(total)