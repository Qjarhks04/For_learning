#include <iostream>
using namespace std;

int main() {

	int x = 1237;
	int y = 1574;

	cout << "x의 10진수 값 : " << x << endl;
	cout << "y의 10진수 값 : " << y << endl;
	cout << "x의 8진수 값 : " << oct << x << endl;
	cout << "y의 8진수 값 : " << y << endl;
	cout << "x의 16진수 값 : " << hex << x << endl;
	cout << "y의 16진수 값 : " << y << endl << endl;

	cout << "x의 10진수 값 : " << dec << showbase << x << endl;
	cout << "x의 8진수 값 : " << oct << x << endl;
	cout << "x의 16진수 값 : " << hex << x;

	return 0;
}