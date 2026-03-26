#include <iostream>
#include <string>
using namespace std;

int main() {

	int score;
	string grade;
	bool flag = 0;

	cout << "0~100점 사이의 점수 입력 : ";
	cin >> score;

	if (score < 0 || score > 100) {
		cout << "0~100점 사이의 점수만 입력하세요." << endl;
		exit(1);
	}

	if (score >= 95) {
		grade = "A+";
	} else if (score >= 90){
		grade = "A";
	} else if (score >= 85) {
		grade = "B+";
	} else if (score >= 80) {
		grade = "B";
	} else if (score >= 75) {
		grade = "C+";
	} else if (score >= 70) {
		grade = "C";
	} else if (score >= 65) {
		grade = "D+";
	} else if (score >= 60) {
		grade = "D";
	} else {
		grade = "F";
	}

	(grade == "F") || (flag = "1");

	cout << "Score : " << score;
	cout << "\tGrade : " << grade;

	if (flag) {
		cout << "\tPass !!" << endl;
	} else {
		cout << "\tFail !!" << endl;
	}

	return 0;
}