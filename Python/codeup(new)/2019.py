import cmath
#아직 못 품(26.07.16.목)
def main():
    a, b, c = map(int, input().split())
    num1, num2 = solve_quadratic(a, b, c)
    print(f"{num1:.2f}")
    print(f"{num2:.2f}")

def solve_quadratic(a, b, c):
    d = (b**2) - (4*a*c)
    sol1 = (-b + cmath.sqrt(d)) / (2*a)
    sol2 = (-b - cmath.sqrt(d)) / (2*a)

    return sol1, sol2

main()