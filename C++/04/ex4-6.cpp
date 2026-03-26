#include <iostream>
using namespace std;

int main() {

	int score;
	char grade;

	cout << "0~100점 사이의 점수 입력 : ";
	cin >> score;

	if (score < 0 || score > 100) {
		cout << "0~100점 사이의 점수를 입력하세요.";
	}
	else {
		if (score >= 90) {
			grade = 'A';
		}
		else if (score >= 80) {
			grade = 'B';
		}
		else if (score >= 70) {
			grade = 'C';
		}
		else if (score >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		cout << "최종 학점 : " << grade;
	}
	

	return 0;
}