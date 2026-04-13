#include <iostream>
using namespace std;

int main() {

    int i, j, k;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j < i; j++) {
            cout << " ";
        }
        for(k = 1; k <= 10; k++) {
            cout << "*";
        }   
        cout << endl;
    }

    return 0;
}