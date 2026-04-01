package java1107;

public class Shape2 {
	protected int x, y;
	public void draw() {
		System.out.println("Shape Draw");
	}
}

class Rectangle2 extends Shape2 {
	private int width, height;
	public void draw() {
		System.out.println("Rectangle Draw");
	}
}

class Triangle extends Shape2 {
	private int base, height;
	public void draw() {
		System.out.println("Triangle Draw");
	}
}

class Circle extends Shape2 {
	private int radius;
	public void draw() {
		System.out.println("Circle Draw");
	}
}
