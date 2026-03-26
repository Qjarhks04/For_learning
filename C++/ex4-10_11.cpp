#include <iostream>
using namespace std;

int main() {

	int day;
	cout << "스케줄 0~6 범위의 값 입력 : ";
	cin >> day;

	//다른 예시
	/*
	case 0: cout << "일요일" << endl;
		cout << "교회가기" << endl;
		break;
	*/

	switch (day) {
		case 0: cout << "일요일\n" << "교회가기" << endl;
			break;
		case 1: cout << "월요일\n" << "학교가기" << endl;
			break;
		case 2: cout << "화요일\n" << "운동하기" << endl;
			break;
		case 3: cout << "수요일\n" << "공부하기" << endl;
			break;
		case 4: cout << "목요일\n" << "집가기" << endl;
			break;
		case 5: cout << "금요일\n" << "사이버 강의 제작" << endl;
			break;
		case 6: cout << "토요일\n" << "놀러가기" << endl;
			break;
	}
	return 0;
}