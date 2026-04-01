package java1017;

class Bank {
	
	double getInterestRate() {
		return 0.0;
	}
}

class BadBank extends Bank {
	double getInterestRate() {
		return 10.0;
	}
}

class NormalBank extends Bank {
	double getInterestRate() {
		return 5.0;
	}
}

class GoodBank extends Bank {
	double getInterestRate() {
		return 3.0;
	}
}
