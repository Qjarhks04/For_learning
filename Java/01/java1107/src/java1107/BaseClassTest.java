package java1107;

class Base {
	public Base() {
		System.out.println("Base() 생성자0");
	}
	
	public Base(String msg) {
		System.out.println("Base() 생성자1");
	}
}

class Derived extends Base {
	public Derived() {
		System.out.println("Derived() 생성자");
	}
}

public class BaseClassTest {
	public static void main(String[] args) {
		Derived r = new Derived();
	}
}
