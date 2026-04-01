#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3;
	int max, min, mid;
	int counter = 0;

	cout << "첫 번째 숫자 입력 : ";
	cin >> num1;
	cout << "두 번째 숫자 입력 : ";
	cin >> num2;
	cout << "세 번째 숫자 입력 : ";
	cin >> num3;

	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;

	min = num1 < num2 ? num1 : num2;
	min = min < num3 ? min : num3;

	if (max == num1) mid = num2 > num3 ? num2 : num3;
	else if (max == num2) mid = num1 > num3 ? num1 : num3;
	else mid = num1 > num2 ? num1 : num2;

	/*if (num1 < max && num1 > min) {
		mid = num1;
	}
	else if (num2 < max && num2 > min) {
		mid = num2;
	}
	else {
		mid = num3;
	}*/

	cout << "max = " << max << "\tmid = " << mid << "\tmin = " << min << endl;

	return 0;
}