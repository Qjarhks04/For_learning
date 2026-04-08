#include <iostream>
using namespace std;

int main() {

	int i, j;

	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 11 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}