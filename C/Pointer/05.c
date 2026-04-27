#include <stdio.h>

int main(void) {

    int a[4] = {10, 20, 30};
    int *p = a;
    p++;
    *p++ = 100;
    *++p = 200;
    
    printf("a[0]=%d, a[1]=%d, a[2]=%d\n", a[0], a[1], a[2]);
    
    return 0;
}