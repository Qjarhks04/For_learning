#include <iostream>
using namespace std;

void count();
int main() {
	int i;
	for (i = 1; i <= 3; i++)
		count();
}

void count() {
	int acnt = 0;
	static int stcnt = 0;
	acnt += 1;
	stcnt += 1;
	cout << "auto count = " << acnt << " static count = " << stcnt << endl;
}