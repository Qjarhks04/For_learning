#pragma once
#include <iostream>
#include <cassert>
using namespace std;

#ifndef ADD_H
#define ADD_H

class Add {
private:
	int a, b;
public:
	Add();
	~Add();
	void setValue(int x, int y);
	int calculate() const;
};

#endif ADD_H
