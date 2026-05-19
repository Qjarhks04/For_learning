#include <iostream>
using namespace std;

int main() {

    int num1, num2, max;
    max = 0;

    cout << "숫자 1 : ";
    cin >> num1;
    cout << "숫자 2 : ";
    cin >> num2;

    max = num1 > num2 ? num1 : num2;

    cout << "더 큰 숫자 : " << max << endl;

    return 0;
}