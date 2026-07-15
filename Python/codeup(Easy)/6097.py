w, h = map(int, input().split())
matrix = [[0] * h for _ in range(w)]

n = int(input())

for i in range(n):
    l, d, x, y = map(int, input().split())
    x -= 1
    y -= 1
    for j in range(l):
        if d == 1:
            matrix[x+j][y] = 1
        else:
            matrix[x][y+j] = 1

for i in range(w):
    for j in range(h):
        print(matrix[i][j], end = ' ')
    print()