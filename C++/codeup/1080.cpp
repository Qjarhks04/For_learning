#include <iostream>
using namespace std;

int main() {

    int num, i, sum = 0;

    do {
        cin >> num;
    }while (num < 0 || num > 1000);

    for(i = 1; i <= num; i++) {
        sum += i;
        if(sum >= num) break;
        else continue;
    }
    cout << i;

    return 0;
}