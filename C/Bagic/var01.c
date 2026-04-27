//변수별 예시
#include <stdio.h>

int sum1 = 0;

//정적변수
int add1(int i) {
    static int sum = 0;
    sum += i;
    printf("%d\n", sum);
}

//지역변수
int add2(int j) {
    int sum = 0;
    sum += j;
    printf("%d\n", sum);
}

//전역변수
int add3(int k) {
    sum1 += k;
    printf("%d\n", sum1);
}

void main() {
    add1(10);
    add1(5);
    add1(3);

    add2(10);
    add2(5);
    add2(3);

    add3(10);
    add3(5);
    add3(3);
}