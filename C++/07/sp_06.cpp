#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int i, select, count;
	srand(time(0));

	do {
		cout << "로또 게임을 시작합니다." << endl;
		cout << "몇 게임을 할까요? : ";
		cin >> select;

		for (int j = 0; j < select; j++) {
			for (int k = 0; k < 6; k++) {
				i = rand() % 45 + 1;
				cout << setw(4) << i;
			}
			cout << endl;
		}

	} while (select > 0);

	return 0;
}