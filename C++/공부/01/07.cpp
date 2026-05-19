#include <iostream>
using namespace std;

int main() {
    
    int age;
    bool eligible;

    cout << "나이 입력 : ";
    cin >> age;

    eligible = ((age >= 25) && (age <= 100));

    if(eligible) cout << "대여 가능" << endl;
    else cout << "대여 불가능" << endl;

    return 0;
}