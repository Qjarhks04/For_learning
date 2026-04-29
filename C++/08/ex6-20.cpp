#include <iostream>
using namespace std;

int main() {
    int sum = 5;
    cout << sum << endl;
    {
        int sum = 3;
        cout << sum << endl;
    }
    cout << sum << endl;
    return 0;
}