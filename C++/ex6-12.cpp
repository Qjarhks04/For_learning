#include <iostream>
using namespace std;

int input();
bool process(int year);
void output(int year, bool result);

int main() {
	int year = input();
	bool result = process(year);
	output(year, result);
}

int input() {

	int year;

	do {
		cout << "년도 입력(1800이후) : ";
		cin >> year;
	} while (year <= 1800);

	return year;
}

bool process(int year) {

	bool check = 0;

	check = ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));

	return check;
}

void output(int year, bool result) {

	if (result) {
		cout << year << "년은 윤년 입니다.\n";
	}
	else {
		cout << year << "년은 윤년이 아닙니다.\n";
	}
}