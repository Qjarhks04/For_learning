package java1010;

public class car {
	private String model;
	private String color;
	private int speed;
	
	private int id;
	private static int numbers = 0;
	
	public car(String m, String c, int s) {
		model = m;
		color = c;
		speed = s;
		
		id = ++ numbers;
	}
	
	public static int getNumberOfCars() {
		return numbers;
	}

}
