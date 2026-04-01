#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "출력할 정수를 입력 : ";
	cin >> n;

	for (int counter = 0; counter < n; counter++) {
		cout << counter << " ";
	}

	return 0;
}