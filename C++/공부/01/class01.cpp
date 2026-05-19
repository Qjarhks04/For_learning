#include <cstdlib>
#include <iostream>
using namespace std;

class Speeto {
private: 
    int num;
public:
    int inputnum();
    int shownum();
    void getnum(int Num);
};

int Speeto::shownum() {
    return num;
}

void Speeto::getnum(int Num) {
    num = rand() % Num + 1;
}

int main() {
    int sp;
    Speeto speeto1;
    for(int i = 0; i < 7; i++) 
        sp = speeto1.inputnum();
        speeto1.getnum(sp);
        cout << "결과1 : " << speeto1.shownum();
    cout << endl;

    Speeto speeto2;
    for(int j = 0; j < 7; j++) 
        sp = speeto2.inputnum();
        speeto2.getnum(sp);
        cout << "결과2 : " << speeto2.shownum() << endl;
    cout << endl;

    return 0;
}