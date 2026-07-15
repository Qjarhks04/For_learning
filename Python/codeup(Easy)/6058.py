num1, num2 = map((lambda x: bool(int(x))), input().split())

print((not num1 and not num2) and not(num1 and num2))