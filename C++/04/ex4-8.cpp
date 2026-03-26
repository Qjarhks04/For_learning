#include <iostream>
using namespace std;

int main() {

	int temperature;
	bool hot, cold;

	cout << "현재 온도 입력 : ";
	cin >> temperature;
	hot = temperature >= 23;
	cold = temperature <= 15;

	if (hot || cold) {
		cout << "에어컨이 켜집니다." << endl;
		if (hot) {
			cout << "냉방 모드를 시작합니다." << endl;
		} else {
			cout << "난방 모드를 시작합니다." << endl;
		}
	} else {
		cout << "에어컨 작동 조건이 아님." << endl;
	}
	return 0;
}