#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	const int CAPACITY = 10;
	int frequency[CAPACITY] = { 0 };
	ifstream inputFile;
	int data;
	int size = 0;

	inputFile.open("integerFile.dat");
	if (!inputFile) {
		cout << "숫자 파일을 열 수 없습니다." << endl;
		cout << "프로그램을 중단합니다.";
		return 0;
	}

	while (inputFile >> data) {
			size++;
			frequency[data]++;
	}

	cout << "파일 안에 " << size << "개의 유효한 데이터가 있습니다." << endl;

	for (int i = 0; i < CAPACITY; i++) {
		cout << i << " ";
		for (int j = 0; j < frequency[i]; j++){
			cout << "*";
		}
		cout << " " << frequency[i] << endl;
	}

	return 0;
}