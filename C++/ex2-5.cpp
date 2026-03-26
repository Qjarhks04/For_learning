#include <iostream>
using namespace std;

int main() {

	int balance = 0;
	int transaction;

	cout << "첫 번째 거래 금액 입력 : ";
	cin >> transaction;
	balance += transaction;

	cout << "두 번째 거래 금액 입력 : ";
	cin >> transaction;
	balance += transaction;

	cout << "세 번째 거래 금액 입력 : ";
	cin >> transaction;
	balance += transaction;

	cout << "계좌의 최종 잔액은 " << balance << "달러입니다.";

}