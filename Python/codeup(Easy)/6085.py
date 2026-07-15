w, h, b = map(int, input().split())

if (1 <= w and h <= 1024) and (b <= 40 and b % 4 == 0):
    num = (((w * h * b) / 8) / 1024) / 1024
    print(f"{num:.2f} MB")