#include <iostream>
using namespace std;

int main() {

	int num1, num2;
	int max = 0;

	cout << "첫 번째 숫자 입력 : ";
	cin >> num1;
	cout << "두 번째 숫자 입력 : ";
	cin >> num2;

	max = num1 > num2 ? num1 : num2;

	cout << "더 큰 숫자 : " << max;

	return 0;
}