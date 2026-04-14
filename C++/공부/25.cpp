#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int day, month;
    int col = 0;

    do {
        cout << "한 달의 날짜 입력(28~31) : ";
        cin >> month;
    } while(month < 28 || month > 31);

    do {
        cout << "요일수(0~6) : ";
        cin >> day;
    } while(day < 0 || day > 6);

    cout << "Sun Mon Tue Wed Thr Fri Sat\n";
    cout << "--- --- --- --- --- --- ---\n";

    col = day;

    for(int j = 0; j < day; j++) {
        cout << "    ";
    }
    for(int k = 1; k <= month; k++) {
        cout << setw(4) << k;
        col++;
        if(col > 6) {
            cout << endl;
            col = 0;
        }
    }
    return 0;
}