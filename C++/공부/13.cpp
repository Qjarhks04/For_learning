#include <iostream>
using namespace std;

int main() {

    int score;
    char grade;
    bool flag = 0;

    cout << "0~100점 사이의 점수 입력 : ";
    cin >> score;

    switch (score/10) {
        case 10:
        case 9: grade ='A'; flag = 1; break;
        case 8: grade = 'B'; flag = 1; break;
        case 7: grade = 'C'; flag = 1; break;
        case 6: grade = 'D'; flag = 1; break;
        default: grade = 'F'; flag = 0;
    }

    cout << "Score : " << score
            << "\tGrade : " << grade;

    if(score == 100 || ((score >= 60) && (score % 10) >= 5)) cout << "+";

    if(flag) cout << "\tPass" << endl;
    else cout << "\tFail" << endl;

    return 0;
}