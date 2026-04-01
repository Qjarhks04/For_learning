package java0919;
import java.util.*;

public class NumberGame {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int answer = 50;
		int guess = 0;
		int num = 0;
		
		do {
			num++;
			System.out.print("정답을 추측하여 보세요 : ");
			guess = scan.nextInt();
			
			if (guess > answer) {
				System.out.println("제시한 정수가 높습니다.");
			} else if (guess < answer) {
				System.out.println("제시한 정수가 낮습니다.");
			}
		} while (guess != answer);
		System.out.println("축합하니다. 시도횟수 = " + num);
	}

}
