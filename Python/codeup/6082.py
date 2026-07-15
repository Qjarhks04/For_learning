num = int(input())

if 0 < num < 30:
    for i in range(1, num+1):
        last_num = str(i)[-1]
        if last_num in ['3', '6', '9']:
            print("X", end = ' ')
        else:
            print(i, end = ' ')