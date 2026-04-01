package java1107;

public class Shape2Test {
//	public static void main(String arg[]) {
//		Shape2 s1, s2, s3, s4;
//		
//		s1 = new Shape2();
//		s2 = new Rectangle2();
//		s3 = new Triangle();
//		s4 = new Circle();
//		
//		s1.draw();
//		s2.draw();
//		s3.draw();
//		s4.draw();
//	}
	
	private static Shape2 arrayOfShapes[];
	
	public static void main(String arg[]) {
		init();
		drawAll();
	}
	
	public static void init() {
		arrayOfShapes = new Shape2[3];
		arrayOfShapes[0] = new Rectangle2();
		arrayOfShapes[1] = new Triangle();
		arrayOfShapes[2] = new Circle();
	}
	
	public static void drawAll() {
		for (int i = 0; i < arrayOfShapes.length; i++) {
			arrayOfShapes[i].draw();
		}
	}
}






