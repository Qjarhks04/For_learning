#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

	int x;
	int a;
	unsigned long int y;

	a = 143267L;
	x = 1456;
	y = -14567;
	cout << x << endl;
	cout << y << endl;
	cout << 1234 << endl;
	cout << 143267L << endl;

	cout << typeid(a).name() << endl;


	return 0;

}