#include <stdio.h>

void main() {
    double d_value;
    float f_value = 5.65;
    int n;
    d_value = f_value;
    d_value = d_value+0.5;
    n = (int)d_value;
    printf("%3.1f, %d", d_value, n);
}