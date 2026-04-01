package java0912;
import java.util.*;

public class Larger {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int num1, num2;
		
		System.out.println("첫번째 정수 : ");
		num1 = input.nextInt();
		
		System.out.println("두번째 정수 : ");
		num2 = input.nextInt();
		
		if (num1 > num2) {
			System.out.println("큰 수는 : " + num1);
		} else if (num2 > num1) {
			System.out.println("큰 수는 : " + num2);
		} else {
			System.out.println("두 수가 같거나 오류가 있습니다.");
		}

	}

}
