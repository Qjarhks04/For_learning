#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int i, select, count;
    srand(time(0));
    do {
        cout << "로또 게임을 시작합니다.\n";
        cout << "몇 게임을 할까요? : ";
        cin >> select;

        count = 0;
        while(count < select) {
            for(i = 0; i < 6; i++) {
                cout << setw(3) << rand() % 45 + 1;
                count++;
            }
            cout << endl;
        }
    } while(select != 0 && select < 0);
    return 0;
}