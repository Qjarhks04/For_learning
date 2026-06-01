#include "student.h"

int main() {
	Student student[5];

	student[0] = Student("George", 82);
	student[1] = Student("John", 73);
	student[2] = Student("Luci", 91);
	student[3] = Student("Mary", 72);
	student[4] = Student("Sue", 65);

	for (int i = 0; i < 5; i++) {
		student[i].print();
	}
	return 0;
}