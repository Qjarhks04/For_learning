#include <iostream>
using namespace std;

int main() {

    int score;
    char grade;

    cin >> score;

    switch (score / 10) {
        case 10:
        case 9: grade = 'A'; break;
        case 8:
        case 7: grade = 'B'; break;
        case 6:
        case 5:
        case 4: grade = 'C'; break;
        default: grade = 'D';
    }

    cout << grade << endl;

    return 0;
}