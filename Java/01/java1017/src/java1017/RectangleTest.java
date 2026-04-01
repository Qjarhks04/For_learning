package java1017;

public class RectangleTest {

	public static void main(String[] args) {
		
		Rectangle r1 = new Rectangle();
		Rectangle r2 = new Rectangle();
		
		r1.setX(5);
		r1.setY(3);
		r1.setWidth(10);
		r1.setHeightt(20);
		
		r2.setX(8);
		r2.setY(9);
		r2.setWidth(10);
		r2.setHeightt(20);
		
		r1.print();
		r1.draw();
		r2.print();
		r2.draw();

	}

}
