n = int(input())
matrix = [[0] * 20 for _ in range(20)]

for i in range(n):
    x, y = map(int, input().split())
    matrix[x][y] = 1

for i in range(1, 20):
    for j in range(1, 20):
        print(matrix[i][j], end = ' ')
    print()