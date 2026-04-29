#include <iostream>
using namespace std;

int getSize();
void process(int size);

int main() {
    cout << " 최대값, 최솟값 찾기!\n"; 
    int size = getSize();
    process(size);

    return 0;
}

int getSize() {
    int size;
    do {
        cout << "입력할 정수 개수(양수) : ";
        cin >> size;
    } while(size <= 0);
    return size;
}

void process(int size) {
    int i, number, smallest, largest;
    i = 1;
    
    cout << "정수 입력 : ";
    cin >> number;
    smallest = largest = number;

    while(i < size) {
        cout << "정수 입력 : ";
        cin >> number;

        smallest = smallest < number ? smallest : number;
        largest = largest > number ? largest : number;
        i++;
    }

    cout << "최소값 : " << smallest;
    cout << "\n최대값 : " << largest << endl;
}