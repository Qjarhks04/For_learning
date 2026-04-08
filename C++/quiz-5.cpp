#include <iostream>
using namespace std;

int main() {

	int i, j, k;

	for (i = 1; i <= 5; i++) {
		for (j = 1;j <= 10;j++) {
			cout << "*";
		}
		cout << endl;
		for (k = 1; k <= i; k++) {
			cout << " ";
		}
	}

	return 0;
}