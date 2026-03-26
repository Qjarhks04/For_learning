#include <iostream>
using namespace std;

int main() {

	char grade;
	cout << "학점(A,B,C,D,F) 입력 : ";
	cin >> grade;

	switch (grade)
	{
	case 'A' :
	case 'B' :
	case 'C' : cout << "Pass 입니다.\n"; break;
	case 'D' :
	case 'F' : cout << "Fail 입니다.\n"; break;
	default : cout << "입력 오류. 다시 시도하세요.\n";
	}
	return 0;
}