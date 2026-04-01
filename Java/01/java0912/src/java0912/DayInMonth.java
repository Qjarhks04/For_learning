package java0912;
import java.util.*;

public class DayInMonth {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int month, day;
		
		System.out.print("일수를 알고 싶은 월을 입력하시오 : ");
		month = scan.nextInt();
		
		switch (month) {
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
		case 2:
			day = 28;
			break;
		default:
			day = 31;
			break;
		}
		
		System.out.println("월의 날수는 : " + day);
		
	}

}
