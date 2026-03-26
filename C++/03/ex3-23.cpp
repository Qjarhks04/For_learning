#include <iomanip>
#include <iostream>
using namespace std;

int main() {

	double x = 1237;
	double y = 12376745.5623;
	double z = 31415.926535;

	cout << "x의 고정 소수점 형식 : " << x << endl;
	cout << "x의 고정 소수점 형식 : " << showpoint << x << endl << endl;

	cout << "y의 과학 표기법 형식 : " << scientific << y << endl;
	cout << "z의 과학 표기법 형식 : " << z << endl << endl;

	cout << "x의 고정 소수점 형식 : " << fixed << setprecision(3) << x << endl;

	return 0;
}