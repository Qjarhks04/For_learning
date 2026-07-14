def main():
    multiples = []
    total_sum = 0

    for i in range(1, 1000, 1):
        if i % 3 == 0 or i % 5 == 0:
            multiples.append(i)
            total_sum += i
    
    print(f"1000미만 자연수 중 3과 5의 배수 : {[multiples]}")
    print(f"총 개수 : {len(multiples)}")
    print(f"총 합 : {total_sum}")


main()