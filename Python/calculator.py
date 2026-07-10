# +, -, *, /만 사용가능한 계산기 대충 만들어봄


def main():
    user_input = input("입력(ex : 7 + 10) : ")
    num1, op, num2 = user_input.split()
    num1, num2 = int(num1), int(num2)

    if op == '+':
        print(add(num1, num2))
    elif op == '-':
        print(sub(num1, num2))
    elif op == '*':
        print(mul(num1, num2))
    elif op == '/':
        print(div(num1, num2))
    else:
        print("error")

def add(num1, num2):
    return num1 + num2

def sub(num1, num2):
    return num1 - num2

def mul(num1, num2):
    return num1 * num2

def div(num1, num2):
    if num2 == 0:
        return "0으로 나눌 수 없음"
    return num1 / num2

if __name__ == "__main__":
    main()
    