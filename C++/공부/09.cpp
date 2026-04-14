#include <iostream>
using namespace std;

int main() {

    int year;
    bool leapyear;

    cout << "년도를 입력하세요 : ";
    cin >> year;

    leapyear = ((year % 400 == 0) ||((year % 4) == 0 && (year % 100) != 0));

    if(leapyear) cout << year << "년은 윤년입니다."<< endl;
    else cout << year << "년은 윤년이 아닙니다." << endl;

    return 0;
}