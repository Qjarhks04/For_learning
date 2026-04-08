#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number, temp;
	int unit = 10000;

	do {
		cout << "음수 아닌 100,000미만의 정수를 입력 : ";
		cin >> number;
	} while (number < 0 || number > 100000);
	
	do {
		temp = number / unit;
		cout << setw(6) << right << unit << "단위 : " << temp << endl;
		number = number - temp * unit;
		unit = unit / 10;
	} while (unit > 0);
}