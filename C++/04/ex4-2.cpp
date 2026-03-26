#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double hours;
	double rate;
	double regularPay;
	double overPay;
	double totalPay;

	cout << "업무 시간 입력 : ";
	cin >> hours;
	cout << "시간당 급여 입력 : ";
	cin >> rate;

	regularPay = hours * rate;
	overPay = 0.0;

	if (hours > 40.0) {
		overPay = (hours - 40.0) * rate * 0.30;
	}

	totalPay = regularPay + overPay;

	cout << fixed << showpoint << setprecision(2);
	cout << "일반 급여 : " << regularPay << endl;
	cout << "초과 근무 급여 : " << overPay << endl;
	cout << "전체 급여 : " << totalPay << endl;

	return 0;
}