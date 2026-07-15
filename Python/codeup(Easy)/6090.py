a, m, d, n = map(int, input().split())

if all(-50 <= x <= 50 for x in(a, m, d)) and 1 <=  n <= 10:
    num = a
    for i in range(n-1):
        num = num * m + d
        
    print(num)