#include <iostream>
using namespace std;

int GetSum(int from, int to, int step = 1, int base = 0);

int main() {
	cout << GetSum(1, 10) << endl;
	cout << GetSum(1, 10, 2) << endl;
	cout << GetSum(1, 10, 2, 10) << endl;
}

int GetSum(int from, int to, int step, int base) {
	int sum = base;
	for (int i = from; i <= to; i += step)
		sum += i;
	return sum;
}