num1, num2 = map((lambda x: bool(int(x))), input().split())

print((num1 and not num2) or (not num1 and num2))