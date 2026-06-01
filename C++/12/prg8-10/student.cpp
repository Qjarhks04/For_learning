#include "student.h"

Student::Student()
	:name(" "), score(0), grade(' ') { }

Student::Student(string nm, int sc)
	:name(nm), score(sc) {
	char temp[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A' };
	grade = temp[score / 10];
}

Student::~Student() {}

void Student::print() {
	cout << setw(12) << left << name;
	cout << setw(8) << right << score;
	cout << setw(8) << right << grade << endl;
}