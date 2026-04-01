package java0912;
import java.util.*;

public class Bonus {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		final int num1 = 1000;
		
		int num2, num3;
		
		System.out.println("실적 입력(단위:만원) : ");
		num2 = input.nextInt();
		
		if (num2 > num1) {
			System.out.println("실적 달성");
			num3 = (num2 - num1) / 10;
			System.out.println("보너스 : " + num3);
		} else {
			System.out.println("실적을 달성하지 못했습니다.");
		}

	}

}
