#include <iostream>
using namespace std;
void fun(int y);

int main() {
	int x = 10;
	fun(x);
	cout << "main함수의 X : " << x << endl;
	return 0;
}

void fun(int y) {
	y++;
	cout << "fun함수의 Y : " << y << endl;
}