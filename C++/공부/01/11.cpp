#include <iostream>
using namespace std;

int main() {

    int score;
    char grade;

    cout << "0~100점 사이의 점수 입력 : ";
    cin >> score;

    if(score < 0 || score > 100) {
        cout << "0~100 사이의 숫자만 입력";
        exit(1);
    } else {
        switch(score/10) {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default : grade = 'F'; break;
        }
    }

    

    cout << "Score : " << score
            << "\tGrade : " << grade << endl;

    return 0;
}