#include <iostream>
using namespace std;

int main() {

    char grade;

    cout << "학점 입력 : ";
    cin >> grade;

    switch (grade) {
        case 'A' :
        case 'B' :
        case 'C' : cout << "pass\n"; break;
        case 'D' :
        case 'F' : cout << "fail\n"; break;
        default : cout << "입력 오류\n";
    }

    return 0;
}