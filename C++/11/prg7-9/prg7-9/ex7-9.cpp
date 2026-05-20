#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

Add::Add() 
	:a(0), b(0) {}
Add::~Add() {}

Sub::Sub() 
	:a(0), b(0) {}
Sub::~Sub() {}

Mul::Mul() 
	:a(0), b(0) {}
Mul::~Mul() {}

Div::Div() 
	:a(0), b(0) {}
Div::~Div() {}

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

int Add::calculate() const {
	return a + b;
}

int Sub::calculate() const {
	return a - b;
}

int Mul::calculate() const {
	return a * b;
}

int Div::calculate() const {
	if (b == 0) {
		cout << "0으로 나눌 수 업음." << endl;
		assert(false);
	}
	return a / b;
}

int main() {

	int a, b;
	char c;

	Add add;
	Sub sub;
	Mul mul;
	Div div;

	cout << "종료(ex, 2 3 #)" << endl;

	do {
		cout << "두 정수와 연산자를 입력(ex, 2 3 #) >> ";
		cin >> a >> b >> c;

		switch (c) {
			case '+': add.setValue(a, b);
				cout << a << " + " << b << " = " << add.calculate() << endl; break;
			case '-': sub.setValue(a, b);
				cout << a << " - " << b << " = " << sub.calculate() << endl; break;
			case '*': mul.setValue(a, b);
				cout << a << " * " << b << " = " << mul.calculate() << endl; break;
			case '/': div.setValue(a, b);
				cout << a << " / " << b << " = " << div.calculate() << endl; break;
		}
		/*
		if (c == '+') {
			add.setValue(a, b);
			cout << a << " + " << b << " = " << add.calculate() << endl;
		}
		else if (c == '-') {
			sub.setValue(a, b);
			cout << a << " - " << b << " = " << sub.calculate() << endl;
		}
		else if (c == '*') {
			mul.setValue(a, b);
			cout << a << " * " << b << " = " << mul.calculate() << endl;
		}
		else if (c == '/') {
			div.setValue(a, b);
			cout << a << " / " << b << " = " << div.calculate() << endl;
		}*/
	} while (c != '#');



	return 0;
}