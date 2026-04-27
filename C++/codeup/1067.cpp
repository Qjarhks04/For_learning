#include <iostream>
using namespace std;

int main() {

    int num;

    cin >> num;

    if(num != 0) {
        if(num > 0) {
            if(num % 2 == 0) cout << "plus\neven";
            else cout << "plus\nodd";
        } else {
            if(num % 2 == 0) cout << "minus\neven";
            else cout << "minus\nodd";
        }
    }


    return 0;
}