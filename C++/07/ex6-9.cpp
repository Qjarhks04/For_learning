#include <iostream>
using namespace std;

void pattern(int size);

int main() {
	int patternSize;

	do {
		cout << "패턴의 크기 입력 : ";
		cin >> patternSize;
	} while (patternSize <= 0);

	pattern(patternSize);
	return 0;
}

void pattern(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "*";
		}
		cout << endl;
	}
}