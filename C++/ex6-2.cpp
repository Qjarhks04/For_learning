#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	double term;

	cout << "계수 a 입력 : ";
	cin >> a;
	cout << "계수 b 입력 : ";
	cin >> b;
	cout << "계수 c 입력 : ";
	cin >> c;

	term = pow(b, 2) - (4 * a * c);

	if (term < 0) {
		cout << "근이 없음" << endl;
	}
	else if (term == 0) {
		cout << "두 근이 같다." << endl;
		cout << "x1 = x2 = " << -b / (2 * a) << endl;
	}
	else {
		cout << "서로 다른 두 근이 존재" << endl;
		cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
		cout << "x1 = " << (-b - sqrt(term)) / (2 * a) << endl;
	}
		

	return 0;
}