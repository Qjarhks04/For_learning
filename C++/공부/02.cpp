#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double hours, rate, regularPay, overPay, totalPay;

    cout << "업무 시간 입력 : ";
    cin >> hours;
    cout << "시간당 급여 : ";
    cin >> rate;

    regularPay = hours * rate;

    if (hours > 40.0) {
        overPay = (hours - 40.0) * rate * 0.30;
    }

    totalPay = regularPay + overPay;

    cout << fixed << showpoint << setprecision(2);
    cout << "일반 급여 : " << regularPay
            << "\n초과 근무 급여 : " << overPay
            << "\n전체 급여 : " << totalPay << endl;

    return 0;
}