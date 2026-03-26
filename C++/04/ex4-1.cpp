#include <iostream>
using namespace std;

int main() {

	int a = 0;

	cout << "정수 입력 : ";
	cin >> a;



	if (a < 0) {
		a = -a;
	}

	cout << "입력한 숫자의 절대값 : " << a << endl;
	return 0;
}