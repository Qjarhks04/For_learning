#include <iostream>
using namespace std;

int main() {

    int num, sum;
    sum = 0;

    cout << "정수 입력(종료 -1) : ";
    cin >> num;

    while(num != -1) {
        sum += num;
        cout << "정수 입력(종료 -1) : ";
        cin >> num;
    }
    cout << "총 합 : " << sum << endl;

    return 0;
}