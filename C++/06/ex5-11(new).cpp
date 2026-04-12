#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int day, month, col;

    do {
        cout << "한 달의 날짜 수를 입력하세요 : ";
        cin >> month;
    } while(month < 28 || month > 31);

    do {
        cout << "첫 날의 요일을 입력하세요 : ";
        cin >> day;
    } while(day < 0 || day > 6);

    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
    cout << "--- --- --- --- --- --- ---" << endl;

    col = day;

    for(int i = 0; i < day; i++) {
        cout << "    ";
    }
    for(int j = 1; j <= month; j++) {
        cout << setw(3) << j;
        col++;
        if(col > 6) {
            cout << endl;
            col = 0;
        }
    }
    return 0;
}