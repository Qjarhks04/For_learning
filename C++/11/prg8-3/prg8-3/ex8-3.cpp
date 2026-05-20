#include <iostream>
using namespace std;

int main() {
	int numberOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month;

	do {
		cout << "월을 입력해주세요(1~12) : ";
		cin >> month;
	} while (month < 1 || month > 12);

	cout << "해당 월에는 " << numberOfDays[month] << "개의 일이 있습니다.";

	return 0;
}