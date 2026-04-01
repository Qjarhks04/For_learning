package java0912;
import java.util.*;

public class DoLoopEx1 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int m = 0;
		
		do {
			System.out.println("올바른 월을 입력하시오 [1-12] : ");
			m = scan.nextInt();
		} while (m < 1 || m > 12);
		
		System.out.println("사용자가 입력한 월은 : " + m + "월입니다.");

	}

}
