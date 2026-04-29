#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    for(int i = 1; i <= num1; i++) {
        for(int j = 1; j <= num2; j++) {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}