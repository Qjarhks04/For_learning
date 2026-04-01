#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	int num;

	cout << "첫 번째 숫자 입력(종료 EOF) : ";

	while(cin >> num) {
		sum += num;
		cout << "다음 숫자 입력 : "; 
	}

	cout << "총 합 : " << sum;
	return 0;
}