#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;

int main() {
	ifstream inputFile;
	const int CAPACITY = 50;
	int numbers[CAPACITY] = { 0 };
	int size = 0;
	int sum = 0;
	double average;
	int smallest = 1000000;
	int largest = -1000000;

	inputFile.open("numFile.dat");
	if (!inputFile) {
		cout << "입력 파일을 여는 동안 문제 발생" << endl;
		cout << "프로그램 중단";
		return 0;
	}

	while (inputFile >> numbers[size] && size < CAPACITY) {
		size++;
	}
	inputFile.close();

	for (int i = 0; i < size; i++) {
		sum += numbers[i];
		smallest = smallest < numbers[i] ? smallest : numbers[i];
		largest = largest > numbers[i] ? largest : numbers[i];
	}

	average = static_cast <double> (sum) / size;

	cout << "목록에 숫자가 " << size << "개 있음." << endl;
	cout << "합  계 : " << sum << endl;
	cout << "평  균 : " << average << endl;
	cout << "최솟값 : " << smallest << endl;
	cout << "최대값 : " << largest << endl;

	return 0;
}