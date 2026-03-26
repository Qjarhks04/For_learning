#include <iostream>
#include <limits>
using namespace std;

int main() {

	unsigned int num1 = numeric_limits <unsigned int> ::max();
	unsigned int num2 = numeric_limits <unsigned int> ::min();

	cout << "unsigned int의 최대값 : " << num1 << endl;
	cout << "unsigned int의 최소값 : " << num2 << endl;

	num1 += 1;
	num2 -= 1;

	cout << "overflow가 일어난 num1 + 1의 값 : " << num1 << endl;
	cout << "underflow가 일어난 num2 - 1의 값 : " << num2 << endl;

	return 0;
}