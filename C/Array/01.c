/*

배열 공부

배열 : 같은 자료형의 변수를 연속적으로 묶어 놓은 저장공간

배열의 선언 : int a [5];

ex1

int a [5];
a[0] = 10;
a[2] = 20;
a[6] = 60; -> error

이차원 배열 : 같은 자료형의 변수를 행과 열의 연석족인 공간으로 묶어 놓는 것

int a [2][3];
a[0][0] - a[0][1] - a[0][2]
a[1][0] - a[1][1] - a[1][2]

*/

#include <stdio.h>

int main() {
    char msg[50] = "Hello World! Good Luck!";
    int i = 2, number = 0;
    while (msg[i] != '!') {
        if(msg[i] == 'a' || msg[i] == 'e' || msg[i] == 'i' ||
            msg[i] == 'o' || msg[i] == 'u')
            number++;
        i++;
    }

    printf("%d %d", i, number);
    return 0;
}