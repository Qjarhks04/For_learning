num = int(input())

if num > 0 and num <= 12:
    if num // 3 == 1:
        print("spring")
    elif num // 3 == 2:
        print("summer")
    elif num // 3 == 3:
        print("fall")
    else:
        print("winter")