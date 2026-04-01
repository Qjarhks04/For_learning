package java1017;

public class Shape {
	
	private int x;
	private int y;
	
	public int getX() {return x;}
	public void setX(int x) {this.x = x;}
	public int getY() {return y;}
	public void setY(int y) {this.y = y;}
	
	void print() {
		System.out.println("x좌표 : " + x + "y좌표 : " + y);
	}

}
