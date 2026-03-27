/*
포인터란 : 메모리의 위치를 표현한 기호

포인터 변수선언

int *a;
*a = 10;
printf("%d", a);
printf("%d", *a);

변수의 주소 찾기

int b = 10;
int *a;
a = &b;
printf("%d\n", *a);
printf("%d\n", b);

int A = 10, B;
int *C = &B;

B = A--;
B += 20;
printf("%d", *C);

*/

#include <stdio.h>

int main() {
    int A = 10, B;
    int *C = &B;

    B = A--;
    B += 20;
    printf("%d", *C);
}



