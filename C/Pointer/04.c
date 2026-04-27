#include <stdio.h>

int main(void) {

    int a[] = {1,2,4,8};
    int *p = a + 1;
    p[1] = 3;
    a[1] = 4;
    p[2] = 5;

    printf("%d %d\n", a[1] + p[1], a[2] + p[2]);

    return 0;
}