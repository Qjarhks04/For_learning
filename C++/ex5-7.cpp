#include <iostream>
#include <fstream>
using namespace std;

int main() {

	int sum = 0;
	int num;
	ifstream infile;

	infile.open("number.dat");
	while (infile >> num) {
		sum += num;
	}

	cout << "ÃÑ ÇÕ : " << sum;
	infile.close();
	return 0;
}