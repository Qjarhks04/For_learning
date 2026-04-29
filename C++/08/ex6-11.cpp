#include <iostream>
using namespace std;

int max(int fst, int snd, int trd);
int min(int fst, int snd, int trd);

int main() {

	int first, second, third;

	cout << "첫 번째 숫자 입력 : ";
	cin >> first;
	cout << "두 번째 숫자 입력 : ";
	cin >> second;
	cout << "세 번째 숫자 입력 : ";
	cin >> third;

	cout << "\n세 수 중 큰 값 = " << max(first, second, third) << endl;
	cout << "세 수 중 작은 값 = " << min(first, second, third) << endl;

	return 0;
}

int max(int fst, int snd, int trd) {

	int max = 0;

	max = fst > snd ? fst : snd;
	max = max > trd ? max : trd;

	return max;
}



int min(int fst, int snd, int trd) {

	int min = 0;

	min = fst < snd ? fst : snd;
	min = min < trd ? min : trd;

	return min;
}