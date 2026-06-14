#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int size, count, num;
    count = num = 0;
    const int CAPACITY = 11;
    int test[CAPACITY] = {0};
    srand(time(0));
    
    do {
        cout << "생성 개수(1~200) : ";
        cin >> size;
    } while(size <= 0 || size > 200);

    while(count < size) {
        num = rand() % 10 + 1;
        test[num]++;
        count++;
    }

    cout << size << "개의 데이터." << endl;

    for(int i = 1; i < CAPACITY; i++) {
        cout << setw(3) << i << " ";
        for(int j = 0; j < test[i]; j++)
            cout << "*";
        cout << " " << test[i] << endl;
    }

    return 0;
}