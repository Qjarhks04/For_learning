#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int startDay;
	int daysinMonth;
	int col = 0;
	int space = 0;
	int day;

	do {
		cout << "한 달의 날짜 수를 입력하세요 (28, 29, 30, 31) : ";
		cin >> daysinMonth;
	} while (daysinMonth < 28 || daysinMonth > 31);

	do {
		cout << "첫 날의 요일을 입력하세요 (0~6) : ";
		cin >> startDay;
	} while (startDay < 0 || startDay > 6);
	
	cout << endl;
	cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
	cout << "--- --- --- --- --- --- ---" << endl;

	for (space = 0; space < startDay; space++) {
		cout << "    ";
		col++;
	}

	

	for (day = 1; day <= daysinMonth; day++) {
		cout << setw(4) << day;
		col++;
		if (col % 7 == 0) {
			cout << endl;
		}
	}

	cout << endl;
	return 0;
}