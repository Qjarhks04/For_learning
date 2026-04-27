#include <iostream>
using namespace std;

int main() {

    int num[3];
    int size = sizeof(num) / sizeof(num[0]);
    
    cin >> num[0] >> num[1] >> num[2];

    for(int i = 0; i < size;  i++) {
        if(num[i] % 2 == 0) cout << "even\n";
        else cout << "odd\n";
    }

    return 0;
}