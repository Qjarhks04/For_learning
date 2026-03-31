#include <stdio.h>

int main() {
    int i;
    char ch;
    char str[7] = "nation";

    for (i=0; i<4; i++) {
        ch = str[5-i];
        str[5-i] = str[i];
        str[i] = ch;
    }
    printf("%s\n", str);
    return 0;
}