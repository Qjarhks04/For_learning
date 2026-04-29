#include <iostream>
using namespace std;

int main() {

    int num, sum = 0;

    do {
        cin >> num;
    }while (num < 0 || num > 100);

    for(int i = 1; i <= num; i++) {
        if(i % 2 == 0) sum += i;
        else continue;
    }
    cout << sum;

    return 0;
}