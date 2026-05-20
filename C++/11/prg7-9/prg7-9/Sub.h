#pragma once
#include <iostream>
#include <cassert>
using namespace std;

#ifndef SUB_H
#define SUB_H

class Sub {
private:
	int a, b;
public:
	Sub();
	~Sub();
	void setValue(int x, int y);
	int calculate() const;
};

#endif ADD_H
