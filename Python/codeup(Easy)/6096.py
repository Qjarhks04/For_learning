matrix = [list(map(int, input().split())) for _ in range(19)]
n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    for j in range(19):
        if matrix[j][y] == 0:
            matrix[j][y] = 1
        else:
            matrix[j][y] = 0
            
        if matrix[x][j] == 0:
            matrix[x][j] = 1
        else:
            matrix[x][j] = 0

for i in range(19):
    for j in range(19):
        print(matrix[i][j], end = ' ')
    print()