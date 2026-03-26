#include <iostream>
using namespace std;

int main() {

	const double PI = 3.14159;

	double radiuis;
	double perimeter;
	double area;

	cout << "원의 반지름 입력 : ";
	cin >> radiuis;

	cout << "반지름 : " << radiuis << endl;

	perimeter = 2 * PI * radiuis;
	area = PI * radiuis * radiuis;

	cout << "둘레 : " << perimeter << endl;
	cout << "면적 : " << area << endl;

	return 0;
}