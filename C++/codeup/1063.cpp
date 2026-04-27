#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    int larger = 0;

    cin >> num1 >> num2;
    larger = num1 > num2 ? num1 : num2;
    cout << larger;

    return 0;
}