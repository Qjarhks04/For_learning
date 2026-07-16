#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    for(int i = 1; i <= num; i++) {
        if(i % 3 == 0) cout << "X ";
        else cout << i << " ";
    } 
    return 0;
}