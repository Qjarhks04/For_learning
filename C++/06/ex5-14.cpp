#include <iostream>
using namespace std;

int main() {

	int i, j, rows, cols;

	cout << "행의 수를 입력 : ";
	cin >> rows;
	cout << "열의 수를 입력 : ";
	cin >> cols;

	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= cols; j++) {
			cout << "*" ;
		}
		cout << endl;
	}

	return 0;
}