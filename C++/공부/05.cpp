#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "숫자1 입력 : ";
    cin >> num1;
    cout << "숫자2 입력 : ";
    cin >> num2;

    if(num1 >= num2) {
        if(num1 == num2) cout << num1 << " == " << num2 << endl;
        else cout << num1 << " > " << num2 << endl;
    } else cout << num1 << " < " << num2 << endl;

    return 0;
}