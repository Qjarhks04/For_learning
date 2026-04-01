package java0912;
import java.util.*;

public class ScoreSwitchTest {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int score, result;
		
		System.out.println("성적 입력 : ");
		score = input.nextInt();
		
		result = score / 10;
		
		switch (result) {
		case 9:
			System.out.println("학점 : A");
			break;
		case 8:
			System.out.println("학점 : B");
			break;
		case 7:
			System.out.println("학점 : C");
			break;
		case 6:
			System.out.println("학점 : D");
			break;
		default:
			System.out.println("학점 : F");
			break;
		}

	}

}
