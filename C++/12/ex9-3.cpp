#include <iostream>
using namespace std;

/*int larger(int a, int b);

int main() {
	int x = 10;
	int y = 20;
	int z = larger(x, y);
	cout << z;
	return 0;
}

int larger(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}*/

int& larger(int& rx, int& ry);

int main() {
	int x = 10;
	int y = 20;
	int z = larger(x, y);
	cout << z;
	return 0;
}

int& larger(int& rx, int& ry) {
	if (rx > ry) {
		return rx;
	}
	return ry;
}

