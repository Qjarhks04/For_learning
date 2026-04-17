#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char ch;
	int count = 0;

	cout << "영문장으로 입력하세요\n";

	while (cin >> noskipws >> ch) {
		if (isalpha(ch)) {
			count++;
		}
		ch = toupper(ch);
		cout << ch;
	}
	cout << "알파벳 개수 = " << count;
	return 0;
}