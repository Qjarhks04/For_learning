#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream infile;
	int num, a;
	bool flag;

	infile.open("number.dat");
	flag = false;

	while (infile >> num && !flag) {
		if (num >= 150) {
			cout << "찾은 숫자 : " << num << endl;
			flag = true;
		}
	}
	if (!flag) {
		cout << "찾는 숫자가 파일에 존재하지 않습니다!" << endl;
	}

	infile.close();
	return 0;
}
