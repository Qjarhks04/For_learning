/*

배열과 포인터

*/

#include <stdio.h>

int main(void) {
    int i;
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr = a + 3;
    for (i=0; i<5; i++) {
        printf("%d\n", *(ptr+i)-3);
    }
}