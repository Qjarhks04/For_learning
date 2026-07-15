# def main():
#     n, m = map(int, input().split())
#     total = []

#     if 1 <= n <= (10**6) and 1 <= m <= (10**7):
#         v = list(map(int, input().split()))
#         if all(1<= x <= m for x in v):
#             for i in range(n):
#                 total.append(sorted(set(get_divisors(v[i])) | set(get_multiples_under(v[i], m))))
#                 print(len(total[i]))

# def get_divisors(n):
#     divisors = []
#     for i in range(1, int(n**0.5) + 1):
#         if n % i == 0:
#             divisors.append(i)
#             if i != n // i:
#                 divisors.append(n // i)
#     divisors.sort() 
#     return divisors

# def get_multiples_under(a, m):
#     return range(a, m + 1, a)

# main()

import sys
from array import array

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    m = int(data_limit := int(input_data[1]))
    spf = array('i', range(m + 1))

    for i in range(2, int(m**0.5) + 1):
        if spf[i] == i:
            for j in range(i * i, m + 1, i):
                if spf[j] == j:
                    spf[j] = i
    results = []
    v = [int(x) for x in input_data[2:2+n]]
    
    for x in v:
        if x <= m:
            temp = x
            div_count = 1
            while temp > 1:
                p = spf[temp]
                exponent = 0
                while temp % p == 0:
                    exponent += 1
                    temp //= p
                div_count *= (exponent + 1)
            
            mul_count = m // x
            total_count = div_count + mul_count - 1
        else:
            div_count = 0
            for i in range(1, int(x**0.5) + 1):
                if x % i == 0:
                    div_count += 1
                    if i != x // i:
                        div_count += 1
            total_count = div_count
        results.append(str(total_count))
    sys.stdout.write('\n'.join(results) + '\n')

if __name__ == '__main__':
    solve()