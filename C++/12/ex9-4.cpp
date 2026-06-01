#include <iostream>
using namespace std;

int main() {
	int score = 92;
	int* pScore = &score;

	cout << "score에 직접 접근 : " << score << endl;
	cout << "score에 간접 접근 : " << *pScore << endl;
	return 0;
}