#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "정수 입력 : ";
    cin >> num;

    if(num < 0) {
        num = -num;
    }

    cout << "절대값 : " << num << endl;

    return 0;
}