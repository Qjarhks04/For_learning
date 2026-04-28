#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char grade;

    cin >> grade;

    switch (static_cast<int>(grade)) {
        case 'A': cout << "best!!!\n"; break;
        case 'B': cout << "good!!\n"; break;
        case 'C': cout << "run!\n"; break;
        case 'D': cout << "slowly~\n"; break;
        default: cout << "what?\n";
    }

    return 0;
}