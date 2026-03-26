#include <iostream>
using namespace std;    // 동전과 지폐들의 합계(페니)를 구하는 프로그램

int main() {

	// 상수 정의
	const unsigned int pennyValue = 1;
	const unsigned int nickelValue = 5;
	const unsigned int dimeValue = 10;
	const unsigned int quarterValue = 25;
	const unsigned int dollarValue = 100;

	// 변수 정의(각 코인의 수)
	unsigned int pennies;
	unsigned int nickels;
	unsigned int dimes;
	unsigned int quarters;
	unsigned int dollars;

	// 전체 값을 나타내는 변수 선언
	unsigned long totalValue;

	cout << "페니의 개수 : ";
	cin >> pennies;

	cout << "니켈의 개수 : ";
	cin >> nickels;

	cout << "다임의 개수 : ";
	cin >> dimes;

	cout << "쿼터의 개수 : ";
	cin >> quarters;

	cout << "달러의 개수 : ";
	cin >> dollars;

	nickels *= nickelValue;
	dimes *= dimeValue;
	quarters *= quarterValue;
	dollars *= dollarValue;

	totalValue = pennies + nickels + dimes + quarters + dollars;

	cout << "전체 값은 " << totalValue << "페니입니다";

}