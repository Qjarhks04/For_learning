#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
void findGrades(const int scores[], char grades[], int size);
void print(const int scores[], char grades[], string names[], int size);

int main() {
	string names[4] = { "George", "John", "Luci", "Mary" };
	int scores[4] = { 82, 73, 91, 72 };
	char grades[4];

	findGrades(scores, grades, 4);
	print(scores, grades, names, 4);
	return 0;
}

void findGrades(const int scores[], char grades[], int size) {
	char temp[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A' };
	for (int i = 0; i < size; i++) {
		grades[i] = temp[(scores[i] / 10)];
	}
}

void print(const int scores[], char grades[], string names[], int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(10) << left << names[i] << "	" << setw(2);
		cout << scores[i] << "	" << setw(2) << grades[i] << endl;
	}
}