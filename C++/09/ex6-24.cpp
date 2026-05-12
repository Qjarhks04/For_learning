#include <iostream>
using namespace std;

static int gcnt;
void count();

int main() {
	int i;
	for (i = 1; i <= 3; i++) {
		count();
		gcnt += 1;
	}
}

void count() {
	static int stcnt;
	stcnt += 1;
	gcnt += 1;
	cout << "local count = " << stcnt << " global count = " << gcnt << endl;
}