import math

num1, num2, num3 = map(int, input().split())

if all(1 <= x <= 100 for x in(num1, num2, num3)):
    print(math.lcm(num1, num2, num3))