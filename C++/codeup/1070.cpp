#include <iostream>
using namespace std;

int main() {

    int num;

    cin >> num;

    switch (num) {
        case 12:
        case 1:
        case 2: cout << "winter\n"; break;
        case 3:
        case 4:
        case 5: cout << "spring\n"; break;
        case 6:
        case 7:
        case 8: cout << "summer\n"; break;
        case 9:
        case 10:
        case 11: cout << "fall\n"; break;
    }

    return 0;
}