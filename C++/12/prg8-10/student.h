#pragma once
#ifndef  STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int score;
	char grade;
public:
	Student();
	Student(string name, int score);
	~Student();
	void print();
};

#endif
