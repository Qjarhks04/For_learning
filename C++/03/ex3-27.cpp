#include <iostream>
using namespace std;

int main() {
	
	int first, second, third, sum;

	cout << "첫 번째 숫자 입력 : ";
	cin >> first;
	cout << "두 번째 숫자 입력 : ";
	cin >> second;
	cout << "세 번째 숫자 입력 : ";
	cin >> third;

	sum = first + second + third;

	cout << "세 숫자의 합 : " << sum;

	return 0;
}