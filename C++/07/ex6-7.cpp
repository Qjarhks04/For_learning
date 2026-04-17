#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int low =  5;
	int high = 15;
	int tryLimit = 5;
	int guess;

	srand(time(0));

	int num = rand() % (high - low + 1) + low;

	int counter = 1;
	bool found = false;

	while (counter <= tryLimit && !found) {
		do {
			cout << "1~15 사이의 정수 입력 : ";
			cin >> guess;
		} while (guess < 5 || guess > 15);

		if (guess == num)
			found = true;
		else if (guess > num)
			cout << "더 작은 숫자입니다." << endl;
		else
			cout << "더 큰 숫자입니다." << endl;
		counter++;
	}

	if (found) {
		cout << "축하합니다. 추측에 성공했습니다.";
		cout << "답 = " << num;
	}
	else {
		cout << "아쉽게 추측에 실패했습니다.";
		cout << "답 = " << num;
	}

	return 0;
}