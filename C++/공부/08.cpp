#include <iostream>
using namespace std;

int main() {
    int temp;
    bool hot, cold;

    cout << "온도 입력 : ";
    cin >> temp;

    hot = (temp >= 23);
    cold = (temp <= 15);

    if(hot || cold) {
        cout << "에어컨이 켜집니다" << endl;
        if(hot) cout << "냉방 모드" << endl;
        else cout << "난방 모드" << endl;
    } else {
        cout << "가동 조건이 아닙니다." << endl;
    }

    return 0;
}