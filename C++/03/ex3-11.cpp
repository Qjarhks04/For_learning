#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

	double x = 23.56;
	int y = 30;

	cout << "캐스팅을 하지 않는 이유 : " << x + y << endl;
	cout << "캐스팅을 하지 않는 경우 자료형 : " << typeid(x + y).name() << endl;

	cout << "캐스팅을 한 경우 : " << static_cast <int> (x) + y << endl;
	cout << "캐스팅을 한 경우 자료형 : " << typeid(static_cast <int> (x) + y).name() << endl;

	return 0;
}