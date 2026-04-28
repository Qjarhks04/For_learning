#include <iostream>
using namespace std;

int main() {

    int num;

    do {
        cin >> num;
    }while (num < 0 || num > 100);

    num--;

    while(num  >= 0) {
        cout << num << endl;
        num--;
    }

    return 0;
}