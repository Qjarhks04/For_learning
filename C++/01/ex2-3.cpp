#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int sum;

	cout << "첫 번째 숫자 입력 : ";
	cin >> num1;
	cout << "두 번째 숫자 입력 : ";
	cin >> num2;

	sum = num1 + num2;
	cout << "두 숫자의 합 : " << sum;
	return 0;
}
