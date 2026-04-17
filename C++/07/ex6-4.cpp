#include <iostream>
#include<cmath>
using namespace std;

int main() {
	const double PI = 3.141592653589793238462;
	int n;
	double s, peri, area;

	do {
		cout << "변의 개수 입력 (4 이상의 정수) : ";
		cin >> n;
	} while (n < 4);

	do {
		cout << "변의 길이 입력 : ";
		cin >> s;
	} while (s < 0.0);

	peri = n * s;
	area = (n * pow(s, 2)) / (4 * tan(PI / n));

	cout << "둘레 : " << peri
		<< "\n넓이 : " << area << endl;
	
	

}


