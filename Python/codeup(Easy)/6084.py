h, b, c, s = map(int, input().split())

num = (((h*b*c*s) / 8) / 1024) / 1024

print(f"{num:.1f} MB")