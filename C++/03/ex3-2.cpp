#include <iostream>
using namespace std;

int main() {
	int x = 4;
	
	cout << "괄호가 있는 경우의 값 : (x + 3) * 5 = " << (x + 3) * 5 << endl;
	cout << "괄호가 없는 경우의 값 : x + 3 * 5 = " << x + 3 * 5 << endl;

	cout << "괄호가 있는 경우의 값 :  = 12 / (x + 2) = " << 12 / (x + 2) << endl;
	cout << "괄호가 없는 경우의 값 :  = 12 / x + 2 = " << 12 / x + 2 << endl;
	return 0;
}