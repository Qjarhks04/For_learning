#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int setGame();
void lottery(int n, int lotto[]);
void lotto_check(int lotto[]);
void BubbleSort(int n[]);
const int SIZE = 6;

int main() {
    int n;
    int lotto[SIZE] = {0};
    srand(time(0));
    n = setGame();
    lottery(n, lotto);
}

int setGame() {
    int num;
    cout << "☆로또 번호 생성기☆" << endl;
    do {
        cout << "로또 게임 횟수 입력 : ";
        cin >> num;
    } while(num <= 0);
    return num;
}

void lottery(int n, int lotto[]) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 0; j < SIZE; j++) {
            lotto[j] = rand() % 45 + 1;
        }
        lotto_check(lotto);
        cout << "set " << i << " :";
        for(j = 0; j < SIZE; j++) {
            cout << setw(3) << lotto[j];
        }
        cout << endl;
    }
}

//내 코드
void lotto_check(int lotto[]) {
    BubbleSort(lotto);

    for(int i = 1; i < SIZE; i++) {
        if(lotto[i-1] == lotto[i]) {
            lotto[i] = rand() % 45 + 1;
            i = 0;
            BubbleSort(lotto);
        }
    }
}

//교수님 코드
/*void lotto_check(int lotto[]) {
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < i; j++) {
            if(lotto[i] == lotto[j]) {
                lotto[i] = rand() % 45 + 1;
                i--;
                break;
            }
        }
    }
    BubbleSort(lotto);
}*/

void BubbleSort(int n[]) {
    int i, j, temp;
    for(i = 0; i < SIZE-1; i++) {
        for(j = 1; j < SIZE - i; j++) {
            if(n[j-1] > n[j]) {
                temp = n[j-1];
                n[j-1] = n[j];
                n[j] = temp;
            }
        }
    }
}