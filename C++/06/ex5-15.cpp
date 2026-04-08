#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int i, j, rows, cols;

	cout << "행의 수 입력 : ";
	cin >> rows;
	cout << "열의 수 입력 : ";
	cin >> cols;

	for (i = 1; i <= rows; i++) {
		for (j = i; j <= cols; j++) {
			cout << setw(2) << j;
			
		}
		cout << endl;
		cols++;
	}

	return 0;
}