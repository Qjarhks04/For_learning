#include <iostream>
using namespace std;

int main() {
    char input;
    int num;
    
    cin >> input;

    if (input >= 'A' && input <= 'F')
        num = input - 'A' + 10;
    cout << uppercase << hex;

    for (int i = 1; i <= 15; i++) {
        cout << num << "*" << i
             << "=" << num * i << endl;
    }
    return 0;
}