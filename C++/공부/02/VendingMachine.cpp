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
    cout << "생성" << endl;
}

VendingMachine::~VendingMachine() {
    cout << "소멸" << endl;
}

void VendingMachine::showStatus() {
    cout << "\n--- 현재 자판기 상태 ---" << endl;
    cout << "남은 음료수: " << drinks << "개" << endl;
    cout << "자판기 잔액: " << balance << "원" << endl << endl;
}

void VendingMachine::pushButton() {
    drinks--;
    money  -= 1000;
    balance -= 1000;
    
    cout << "[덜컹] 음료수가 나왔습니다! (잔액 " << money << " 원 남음)" << endl;
}

void VendingMachine::insertMoney(int money) {
    this->money = money;
    balance += money;
    cout << "[띡] " << money << "원이 투입되었습니다." << endl;
}

int main() {
    VendingMachine machine; // 자판기 가동! (음료수 3개, 잔액 0원)

    machine.showStatus();  // 현재 상태 보기
    
    machine.insertMoney(2000); // 2000원 투입!
    machine.pushButton();      // 음료수 버튼 딸깍! (1000원 차감, 음료수 -1)
    
    machine.showStatus();  // 변한 상태 보기

    VendingMachine machine1; // 자판기 가동! (음료수 3개, 잔액 0원)

    machine1.showStatus();  // 현재 상태 보기
    
    machine1.insertMoney(2000); // 2000원 투입!
    machine1.pushButton();      // 음료수 버튼 딸깍! (1000원 차감, 음료수 -1)
    machine1.pushButton(); 
    machine1.showStatus();  // 변한 상태 보기

    return 0;
}