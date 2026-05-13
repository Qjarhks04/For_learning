#include <iostream>
#include <cassert>
using namespace std;

class Account {
private:
    long accNumber;
    double balance;
    static int base;
public:
    Account(double bal);
    ~Account();
    Account(const Account& acc) = delete;
    void checkBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
    static int getbase();
};

int Account::base = 0;

Account::Account(double bal) 
    :balance(bal) {
        if(bal < 0.0) {
            cout << "잔액은 음수가 될 수 없음. 종료!";
            assert(false);
        }
        base++;
        accNumber = 100000 + base;

        cout << "계좌_#" << accNumber << "생성." << endl;
        cout << "잔액_$" << balance << endl << endl;
    }

Account :: ~Account() {
    cout << "계좌_#" << accNumber << "가 닫힘" << endl;
        cout << "$" << balance << "를 고객에게 보냄" << endl << endl;
}

void Account::checkBalance() const {
    cout << "계좌_#" << accNumber << endl;
    cout << "트랜잭션 - 잔액 확인" << endl;
    cout << "잔액_$" << balance << endl << endl;
}

void Account::deposit(double amount) {
    if(amount > 0.0) {
        balance += amount;
        cout << "계좌_#" << accNumber << endl;
        cout << "트랜잭션 - 입금 $" << amount << endl;
        cout << "변경된 잔액_$" << balance << endl << endl;
    } 
    else {
        cout << "트랜잭션이 중단됨." << endl;
    }
}

void Account::withdraw(double amount) {
    if(amount > balance) {
        amount = balance;
    }
    balance -= amount;
    cout << "계좌_#" << accNumber << endl;
    cout << "트랜잭션 - 인출" << amount << endl;
    cout << "변경된 잔액_$" << balance << endl << endl;
}

int Account::getbase() {
    return base;
}

int main() {
    Account acc1(2000);
    Account acc2(5000);
    Account acc3(1000);

    acc1.deposit(150);
    acc2.checkBalance();
    acc1.checkBalance();
    acc3.withdraw(800);
    acc3.withdraw(400);
    acc1.withdraw(1000);
    acc2.deposit(120);
    cout << "--- 계좌개수 : " << acc3.getbase()
            << "   ---" << endl << endl;
}