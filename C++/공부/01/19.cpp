#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;

    cout << "첫 숫자 입력(종료 EOF) : ";

    while(cin >> num) {
        sum += num;
        cout << "다음 숫자 입력 : ";
    }

    cout << "총 합 : " << sum << endl;

    return 0;
}