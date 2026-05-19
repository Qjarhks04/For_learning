#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int low = 5;
    int high = 15;
    srand(time(0));

    while(1) {
        int num = rand() % (high - low + 1) + low;
        cout << num << " ";

        if(num == 5) {
            break;
        } else {
            continue;
        }
    }
}