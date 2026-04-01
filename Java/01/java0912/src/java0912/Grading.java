package java0912;
import java.util.*;

public class Grading {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int num;
		
		System.out.println("성적을 입력하시오 : ");
		num = input.nextInt();
		
		if (num >= 90) {
			System.out.println("학점 A");
		} else if (num >= 80) {
			System.out.println("학점 B");
		} else if (num >= 70) {
			System.out.println("학점 C");
		} else if (num >= 60) { 
			System.out.println("학점 D");
		} else {
			System.out.println("학점 F");
		}

	}

}
