#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Randominteger {
private:
    int low, high, value;
public:
    Randominteger(int low, int high);
    ~Randominteger();
    Randominteger(const Randominteger& random) = delete;
    void print() const;
};

Randominteger::Randominteger(int lw, int hh) 
    :low(lw), high(hh) {
        srand(time(0));
        value = rand() % (high - low + 1) + low;
        cout << "생성자 호출" << endl;
    }

Randominteger::~Randominteger() {
    cout << "소멸자 호출" << endl;
}

void Randominteger::print() const {
    cout << value << endl;
}

int main() {
    Randominteger r1(100, 200);
    r1.print();

    Randominteger r2(400, 600);
    r2.print();

    Randominteger r3(1500, 2000);
    r3.print();

    return 0;
}