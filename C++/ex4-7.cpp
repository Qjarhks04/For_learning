#include <iostream>
using namespace std;

int main() {

	int age;
	bool eligible;

	cout << "나이를 입력 : ";
	cin >> age;

	eligible = (age >= 25) && (age <= 100);

	if (eligible) {
		cout << "자동차를 대여할 수 있습니다.";
	}
	else {
		cout << "죄송합니다. 자동차를 대여할 수 없습니다.";
	}

	return 0;
}