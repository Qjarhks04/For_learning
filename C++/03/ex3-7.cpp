#include <iostream>
using namespace std;

int main() {

	int x = 20;
	int y = 30;
	int z = 40;
	int t = 50;
	int u = 60;
	x += 5;
	y -= 3;
	z *= 10;
	t /= 8;
	u %= 7;

	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
	cout << "t의 값 : " << t << endl;
	cout << "u의 값 : " << u;

	return 0;
}