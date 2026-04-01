package java0912;
import java.util.*; // 화면에서 입력받는 라이브러리 추가 

public class sumTest {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
//		int num1, num2, sum; 입력받은 두 수의 합을 구하는
//		
//		System.out.print("첫번째 수 : ");
//		num1 = input.nextInt();
//		
//		System.out.print("두번째 수 : ");
//		num2 = input.nextInt();
//		
//		sum = num1 + num2;
//		
////		System.out.println(num1 + " + " + num2 + " = " + sum);
//		
//		System.out.printf("%d + %d = %d", num1, num2, sum);
		
		
// 원의 반지름을 입력해서 면적을 구하는 문 반지름은 double 8바이트 
		
		double radius, area;
		
		System.out.print("반지름 입력 : ");
		radius = input.nextDouble();
		
		area = 3.14 * radius * radius;
		
		System.out.println("원의 면적은 : " + area + "입니다");
		System.out.printf("원의 면적은 : %.2f입니다", area); //형식지정자는 printf()메소드만 지원함 
		
		

	}

}
