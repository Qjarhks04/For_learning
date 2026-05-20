#pragma once
#include <iostream>
#include <cassert>
using namespace std;

#ifndef MUL_H
#define MUL_H

class Mul {
private:
	int a, b;
public:
	Mul();
	~Mul();
	void setValue(int x, int y);
	int calculate() const;
};

#endif ADD_H
