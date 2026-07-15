num = int(input())

if num < 0 and num % 2 == 0:
    print('A')
elif num < 0 and num % 2 != 0:
    print('B')
elif num > 0 and num % 2 == 0:
    print('C')
elif num > 0 and num % 2 != 0:
    print('D')