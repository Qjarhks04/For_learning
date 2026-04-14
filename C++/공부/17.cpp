#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int num, sum, count, subject;
    double average;
    count = sum = 0;

    cout << "과목 수 입력 : ";
    cin >> subject;

    while (count < subject) {
        cout << "점수 입력 : ";
        cin >> num;

        if(num < 0 || num > 100) {
            cout << ">";
            continue;
        }
        sum += num; 
        count++;
    }

    average = static_cast <double> (sum) / subject;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "평균 점수 : " << average << endl;

    return 0;
}