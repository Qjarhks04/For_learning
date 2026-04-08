#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int i, j, k;

    for (i = 1; i <= 9; i += 3) {
        for (j = 1; j <= 9; j++) {
            for (k = i; k < i + 3; k++) {
                cout << setw(2) << k << " * "
                    << setw(2) << j << " = "
                    << setw(2) << k * j << " | ";
            }
            cout << endl;
        }
        cout << "--------------------------------------------\n";
    }
}