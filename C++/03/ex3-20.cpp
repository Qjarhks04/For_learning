#include <iostream>
#include <limits>
using namespace std;

int main() {

	double num1 = +numeric_limits <double> ::max();
	double num2 = -numeric_limits <double> ::max();

	cout << "unsigned int의 최대값 : " << num1 << endl;
	cout << "unsigned int의 최소값 : " << num2 << endl;

	num1 *= 1000.00;
	num2 *= 1000.00;

	cout << "overflow가 일어난 num1 * 1000의 값 : " << num1 << endl;
	cout << "underflow가 일어난 num2 * 1000의 값 : " << num2 << endl;

	return 0;
}