#include <iostream>
using namespace std;
int getScore();
char findGrade(int score);
void printResult(int score, char grade);
bool flag;
int main() {
	int score;
	char grade;

	score = getScore();
	grade = findGrade(score);
	printResult(score, grade);

	return 0;
}

int getScore() {
	int score;

	do {
		cout << "점수 입력(0~100) : ";
		cin >> score;
	} while (score < 0 || score > 100);

	return score;
}

char findGrade(int score) {
	char grade;

	switch (score / 10) {
		case 10:
		case 9: grade = 'A'; flag = 1; break;
		case 8: grade = 'B'; flag = 1; break;
		case 7: grade = 'C'; flag = 1; break;
		case 6: grade = 'D'; flag = 1; break;
		default: grade = 'F'; flag = 0;
	}
	return grade;
}

void printResult(int score, char grade) {
	cout << "Score : " << score
		<< "\tGrade : " << grade;

	if ((score == 100) || (score >= 60) && (score % 10 >= 5)) cout << "+";

	if (flag) cout << "\tPass!!\n";
	else cout << "\tFail!!\n";
}