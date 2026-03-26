#include <iostream>
#include <iomanip>
#include <typeinfo>
using namespace std;

int main() {

	double number;

	cout << "number에 부동 소수점 값 입력 : ";
	cin >> number;

	cout << "입력된 number의 값 : " << fixed << setprecision(2) << number << endl;
	cout << "정수부 : " << static_cast <int> (number) << endl;
	cout << "소수부 : " << number - static_cast <int> (number) << endl;

	return 0;
}