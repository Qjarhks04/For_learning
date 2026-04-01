package java1010;

public class Test {

	public static void main(String[] args) {
		
		A obj = new A(); //객체로 생성해서 접
		//obj.a = 10; 외부클래스 전용멤버는 다른 클래스에서 접근 안 
		obj.b = 20; // 디폴트 멤버는 접근할 수 있음.
		obj.c = 30; // 공용 멤버는 접근할 수 있음.
		System.out.println(obj.b + ", " + obj.c);

	}

}
