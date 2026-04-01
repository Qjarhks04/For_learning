package java1017;

public class Rectangle1 extends Shape1 {
	private int width;
	private int height;
	
	public Rectangle1(int x, int y, int width, int height) {
		super(x, y);
		System.out.println("Rectangle()");
		this.width = width;
		this.height = height;
	}
	
	double calcArea() {
		return width * height;
	}

}
