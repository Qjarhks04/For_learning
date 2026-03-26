#include <iostream>
using namespace std;

int main() {

	bool x = true;
	bool y = false;
	bool z = true;

	cout << "기본적인 x의 출력 : " << x << endl;
	cout << "기본적인 y의 출력 : " << y << endl;

	cout << "조정자를 사용한 x의 값 : " << boolalpha << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;

	cout << "x의 값 : " << noboolalpha << x << endl;

	return 0;
}