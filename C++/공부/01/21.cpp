#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream infile;
    int num;
    bool flag = false;
    infile.open("numbers.dat");

    while(infile >> num && !flag) {
        if(num >= 150) cout << "찾는 숫자 : " << num; flag = true;
    }
    if(!flag) cout << "숫자 없음";

    infile.close();
    return 0;
}