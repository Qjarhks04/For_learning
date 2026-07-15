a, r, n = map(int, input().split())

if all(0 <= x <= 10 for x in(a, r, n)):
    num = a
    for i in range(n-1):
        num *= r
        
    print(num)