#include <iostream>
using namespace std;

int main() {

    int num, sum;
    num = sum = 0;

    do {
        sum += num;
        cout << "정수 입력 (종료 -1) : ";
        cin >> num;
    } while(num != -1);

    cout << "총 합 : " << sum << endl;
    return 0;
} 

/* int main() {

    int num;
    int sum = 0;

    cout << "입력 : ";
    cin >> num;

    while(num != -1) {
        sum += num;
        cout << "입력 : ";
        cin >> num;
    }
    cout << "총 합 : " << sum << endl;
    return 0;
} */