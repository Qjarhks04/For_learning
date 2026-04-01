#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int score, sum, counter, subject;
	double average;

	sum = counter = subject = 0;

	cout << "과목의 개수를 입력 : ";
	cin >> subject;

	while (counter < subject) {
		cout << "점수 입력(0~100의 범위) : ";
		cin >> score;
		if (score >= 0 && score <= 100) {
			sum += score;
			counter++;
		}
		else {
			cout << "error" << endl;
			continue;
		}
	}

	average = static_cast <double> (sum) / counter;
	cout << fixed << setprecision(2) << showpoint;
	cout << "평균 점수 : " << average << endl;

	return 0;
}