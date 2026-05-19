#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int lower = 1;
    int higher = 300;
    int divisor = 7;
    int col = 1;

    for (int i = lower; i < higher; i++) {
        if(i % divisor == 0) {
            cout << setw(4) << i;
            col++;
        }
        if(col > 10) {
            cout << endl;
            col = 1;
        }
    }

    return 0;
}