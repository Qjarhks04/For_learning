#include <iostream>
using namespace std;

int main() {

	int fact, i, j;
	unsigned int sum = 1;

	while (1) {
		cout << "양의 정수 입력(종료:0) : ";
		cin >> fact;

		if (fact == 0)
			break;

		for (i = 1; i <= fact; i++) {
			for (j = 1, sum = 1; j <= i; j++) {
				cout << j;
				(j == i) ? cout << "=" : cout << "*";
				sum *= j;
			}
			cout << sum << endl;
		}
	}

	cout << "종료\n";
	return 0;
}