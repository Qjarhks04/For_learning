#include <iostream>
using namespace std;

int main() {

	int hour, minute, second, time;

	cout << "시간, 분, 초를 입력받아 초 단위로 환산하자!" << endl << endl;

	cout << "시간 입력 : ";
	cin >> hour;
	cout << "분 입력 : ";
	cin >> minute;
	cout << "초 입력 : ";
	cin >> second;

	time = (hour * 3600) + (minute * 60) + second;

	cout << hour << "시간" << minute << "분" << second << "초 : " << "총 " << time << "초 입니다.";
}