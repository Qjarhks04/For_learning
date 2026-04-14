#include <iostream>
using namespace std;

int main() {

    int num1, num2, larger;

    cout << "숫자1 입력 : ";
    cin >> num1;
    cout << "숫자2 입력 : ";
    cin >> num2;

    if(num1 >= num2) larger = num1;
    else larger = num2;

    cout << "더 큰 숫자 : " << larger << endl;

    return 0;
}