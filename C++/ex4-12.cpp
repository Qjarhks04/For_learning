#include <iostream>
using namespace std;

int main() {

	int score;
	char grade;

	cout << "0~100점 사이의 점수 입력 : ";
	cin >> score;

	switch (score / 10)
	{
	case 10: grade = 'A'; break;
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	cout << "Score : " << score;
	cout << "\t Grade : " << grade << endl;

	return 0;
}