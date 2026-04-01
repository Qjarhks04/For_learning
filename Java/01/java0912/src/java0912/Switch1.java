package java0912;
import java.util.*;

public class Switch1 {

	public static void main(String[] args) {
		
		int num;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("숫자입력 : ");
		num = input.nextInt();
		
		switch (num) {
		case 0: {
			System.out.println("없음");
			break;
		} case 1: {
			System.out.println("하나");
			break;
		} case 2: {
			System.out.println("둘");
			break;
		} case 3: {
			System.out.println("셋");
			break;
		}
		default:
			System.out.println("많음");
			break;
		}

	}

}
