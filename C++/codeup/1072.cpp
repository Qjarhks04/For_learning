#include <iostream>
using namespace std;

int main() {

    int n, m;

    cin >> n;
    lable:
    cin >> m;

    if(n-- != 0) {
        cout << m << endl;
        goto lable;
    }

    return 0;
}