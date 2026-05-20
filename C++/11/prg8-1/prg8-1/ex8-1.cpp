#include <iostream>
using namespace std;

int main() {
	const int CAPACITY = 10;
	int numbers[CAPACITY];
	int i, size;

	do {
		cout << "크기를 입력(1~10) : ";
		cin >> size;
	} while (size < 1 || size > 10);

	cout << size << "개의 숫자를 입력 : ";
	

	for (i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	for (i = size - 1; i >= 0; i--) {
		cout << numbers[i] << " ";
	}

	return 0;
}