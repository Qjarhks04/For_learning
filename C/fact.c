#include <stdio.h>

int sum(int n) {
    printf("%d\n", n);
    if(n<1) return 1;
    else return (n+sum(n-1));
}

int recursive(int n) {
    printf("%d\n", n);
    if(n<1) return -1;
    else return (recursive(n-3)+1);
}

int recursived(int n) {
    if(n != 1) recursived(n-1);
    printf("%d\n", n);
}

int main() {
    recursived(5);

    return 0;
}