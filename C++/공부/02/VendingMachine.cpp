#include <iostream>
using namespace std;

class VendingMachine {
private:
    int drinks;
    int balance;
public:
    int money = 0;
    VendingMachine();
    ~VendingMachine();
    void showStatus();
    void pushButton();
    void insertMoney(int money);
};

VendingMachine::VendingMachine() {
    drinks = 3;
    balance = 0;
}

VendingMachine::~VendingMachine() {}

void VendingMachine::showStatus() {
    cout << "\n--- 현재 자판기 상태 ---" << endl;
    cout << "남은 음료수: " << drinks << "개" << endl;
    cout << "자판기 잔액: " << balance << "원" << endl << endl;
}

void VendingMachine::pushButton() {
    if(money >= 1000) {
        drinks--;
        money  -= 1000;
        balance += 1000;
    }
    cout << "[덜컹] 음료수가 나왔습니다! (잔액 " << money << " 원 남음)" << endl;
}

void VendingMachine::insertMoney(int money) {
    this->money = money;
    cout << "[띡] " << money << "원이 투입되었습니다." << endl;
}

int main() {
    VendingMachine machine; 

    machine.showStatus(); 
    
    machine.insertMoney(2000); 
    machine.pushButton();    
    machine.pushButton();
    
    machine.showStatus(); 

    return 0;
}