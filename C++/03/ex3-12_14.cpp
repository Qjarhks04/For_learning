#include <iostream>
using namespace std;

int main() {

	cout << "표현식의 결과 5 + 7 * 4 = " << 5 + 7 * 4 << endl << endl;

	int result;
	result = 5 - 15 % 4;
	cout << "result = 5 - 15 % 4 \t result에 저장된 값 : " << result << endl << endl;

	int x = 5;
	cout << "(x + 6) * 7의 값 : " << (x + 6) * 7 << endl;
	cout << "("<<x<<" + 6) * 7의 값 : " << (x + 6) * 7 << endl;

	return 0;
}