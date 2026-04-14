#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;
    int max, min, mid;

    cout << "숫자 1 : ";
    cin >> num1;
    cout << "숫자 2 : ";
    cin >> num2;
    cout << "숫자 3 : ";
    cin >> num3;

    max = num1 > num2 ? num1 : num2;
    max = max > num3 ? max : num3;

    min = num1 < num2 ? num1 : num2;
    min = min < num3 ? min : num3;

    if(max == num1) mid = num2 > num3 ? num2 : num3;
    else if(max == num2) mid = num1 > num3 ? num1 : num3;
    else mid = num1 > num2 ? num1 : num2;

    cout << "\nmax = " << max 
            << "\tmid = " << mid
            << "\tmin = " << min << endl;

    return 0;
}