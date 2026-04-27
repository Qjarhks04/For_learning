#include <stdio.h>

void main() {
    int a = 13;
    float b = 3.26;

    printf("%d\n", a);
    printf("%5d\n", a);
    printf("%05d\n", a);

    printf("%f\n", b);
    printf("%.1f\n", b);
    printf("%6.1f\n", b);
    printf("%-6.1f\n", b);
    printf("%-6.3f\n", b);
}