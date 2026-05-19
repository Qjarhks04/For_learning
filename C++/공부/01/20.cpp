#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int num;
    int sum = 0;
    ifstream infile;
    
    infile.open("number.dat");

    while(infile >> num) {
        sum += num;
    }

    cout << "총 합 : " << sum << endl;
    infile.close();

    return 0;
}