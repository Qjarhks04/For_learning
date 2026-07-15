num = int(input(), 16)

for i in range(1, 16, 1):
    print(f"{num:X}*{i:X}={num*i:X}")