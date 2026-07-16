h, m = map(int, input().split())
total = h * 60 + m
total -= 30

if total < 0:
    h = 23
    m = 60 + total
else:
    h = total // 60
    m = total % 60


print(f"{h} {m}")