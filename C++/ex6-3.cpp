#include <iostream>
#include <cmath>
using namespace std;

int main() {

	const double PI = 3.141592653589793238462;

	double degree1 = PI / 4;
	double degree2 = PI / 6;

	cout << "sin (45) : " << sin(degree1) << endl;
	cout << "cos (45) : " << cos(degree1) << endl;
	cout << "tan (45) : " << tan(degree1) << endl << endl;

	cout << "sin (30) : " << sin(degree2) << endl;
	cout << "cos (30) : " << cos(degree2) << endl;
	cout << "tan (30) : " << tan(degree2) << endl;

	return 0;
}