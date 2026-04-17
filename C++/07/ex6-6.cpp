#include <iostream>
#include <ctime>
using namespace std;

int main() {

	long elapsedSeconds = time(0);
	cout << "elapsedSeconds : " << elapsedSeconds << endl;
	int currenSecond = elapsedSeconds % 60;
	cout << "currenSecond = elapsedSeconds % 60 : " << currenSecond << endl << endl;

	long elapsedMinutes = elapsedSeconds / 60;
	cout << "elapsedMinutes = elapsedMinutes / 60 : " << elapsedMinutes << endl;
	int currentMinute = elapsedMinutes % 60;
	cout << "currentMinute = elapsedMinutes % 60 : " << currentMinute << endl << endl;

	long elapsedHours = elapsedMinutes / 60;
	cout << "elapsedHours = elapsedMinutes / 60 : " << elapsedHours << endl;
	int currentHour = elapsedHours % 24;
	cout << "currentHour = elapsedHours % 24 : " << endl << endl;

	cout << "(그리니치 표준시) 현재 시간 : ";
	cout << currentHour << ":" << currentMinute << ":" << currenSecond << endl;
	cout << "(한국 표준시) 현재 시간 : ";
	cout << currentHour + 9 << ":" << currentMinute << ":" << currenSecond << endl;


	return 0;
}