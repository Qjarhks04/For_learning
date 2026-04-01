package java1010;

public class CarTest {

	public static void main(String[] args) {
		
		car c1 = new car("S600", "white", 80);
		car c2 = new car("E500", "blue", 20);
		int n = car.getNumberOfCars();
		System.out.println("지금까지 생성된 자동차 수 = " + n);

	}

}
