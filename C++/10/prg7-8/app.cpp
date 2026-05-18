#include "time.h"

int main() {
	Time time(4, 5, 27);
	cout << "원래 시간 : ";
	time.print();

	for (int i = 0; i < 143500; i++) {
		time.tick();
	}

	cout << "143500초가 지나면 : ";
	time.print();
	return 0;
}