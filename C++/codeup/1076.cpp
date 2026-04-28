#include <iostream>
using namespace std;

int main() {

    char ch, x = 'a';

    cin >> ch;

    while (ch >= x) {
        cout << x << " ";
        x++;
    }

    return 0;
}