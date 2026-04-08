#include <iostream>
using namespace std;

int main() {

	int i, num, mod, count;
	mod = count = 0;

	do {
		cout << "양의 정수 입력 : ";
		cin >> num;
	} while (num <= 0);



	for (i = 1; i <= num; i++) {
		mod = num % i;
		if (mod == 0) {
			count++;
			cout << i << " ";
		}
	}
	cout << endl;

	if (count == 2) cout << num << "은(는) 소수 입니다.";
	else cout << num << "은(는) 소수가 아닙니다.";

	return 0;
}