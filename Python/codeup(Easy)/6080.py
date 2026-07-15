num1, num2 = map(int, input().split())

if all(0 < x <= 10 for x in(num1, num2)):
    for i in range(1, num1 + 1):
        for j in range(1, num2 + 1):
            print(i, j)