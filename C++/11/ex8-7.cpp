#include <iostream>
using namespace std;

void print(const int numbers[], int size);
void multiplyByTwo(int numbers[], int size);

int main() {
    int numbers[5] = {150, 170, 190, 110, 130};

    print(numbers, 5);
    multiplyByTwo(numbers, 5);
    print(numbers, 5);
    return 0;
}

void print(const int numbers[], int size) {
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void multiplyByTwo(int numbers[], int size) {
    for(int i = 0; i < size; i++) {
        numbers[i] *= 2;
    }
}