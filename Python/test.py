def swap(a, b):
    return b, a

a, b = 10, 20
print("스왑전 : ", a, b)
print("스왑후 : ", swap(a, b))

print("스왑후 : ", a, b)  # a와 b는 여전히 10과 20입니다.