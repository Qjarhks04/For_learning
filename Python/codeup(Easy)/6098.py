matrix = [list(map(int, input().split())) for _ in range(10)]
x, y = 1, 1
while True:
    matrix[x][y] = 9
    
    if matrix[x][y+1] == 0:
        matrix[x][y+1] = 9
        y += 1
    elif matrix[x+1][y] == 0:
        matrix[x+1][y] = 9
        x += 1
    elif matrix[x][y+1] == 2:
        matrix[x][y+1] = 9
        y += 1
        break
    elif matrix[x+1][y] == 2:
        matrix[x+1][y] = 9
        x += 1
        break
    else:
        break

for i in range(10):
    for j in range(10):
        print(matrix[i][j], end = ' ')
    print()