r, g, b = map(int, input().split())
count = 0
if 0 <= r and g and b < 128:
    for i in range(r):
        for j in range(g):
            for k in range(b):
                print(i, j, k)
                count += 1
print(count)