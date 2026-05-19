#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "0~6 범위의 정수를 입력 : ";
    cin >> num;

    if(num < 0 || num > 6) {
        cout << "error"; exit(1);
    } else {
        switch (num) {
            case 0: cout << "일요일" << endl; // break; 사용시 하나씩만 실행가능
            case 1: cout << "월요일" << endl;
            case 2: cout << "화요일" << endl;
            case 3: cout << "수요일" << endl;
            case 4: cout << "목요일" << endl;
            case 5: cout << "금요일" << endl;
            case 6: cout << "토요일" << endl;
        }
    }
    return 0;
}