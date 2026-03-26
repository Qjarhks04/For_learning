#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

	int x;
	double y;
	x = 23.67;
	y = 130;

	cout << "x = 23.67의 자료형 : " << typeid(x = 23.67).name() << endl;
	cout << "할당 후의 x 값 : " << x << endl << endl;
	cout << "y = 130의 자료형 : " << typeid(y = 130).name() << endl;
	cout << "할당 후의 y 값 : " << y << endl;

	return 0;
}