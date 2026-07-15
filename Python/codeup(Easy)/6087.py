num = int(input())

if 1 <= num <= 100:
    for i in range(1, num+1):
        if i % 3 != 0:
            print(i, end = ' ')