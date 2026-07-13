def sum(*args):
    result = 0
    for i in args:
        result += i

    return result

def main():
    result = sum(1,2,3,4,5,6,7,8,9,10)
    print(result)

main()