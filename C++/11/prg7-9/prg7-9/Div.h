#pragma once
#include <iostream>
#include <cassert>
using namespace std;

#ifndef DIV_H
#define DIV_H

class Div {
private:
	int a, b;
public:
	Div();
	~Div();
	void setValue(int x, int y);
	int calculate() const;
};

#endif ADD_H
