#include <iostream>
using namespace std;

int swap(int a, int b);

int main() {
    int x = 10; 
    int y = 20;
    cout << swap(x, y) << endl;
}

int swap(int x, int y) {
    int max = 0;
    return max = x > y ? x : y;
}
