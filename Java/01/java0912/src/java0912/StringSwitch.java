package java0912;
import java.util.*;

public class StringSwitch {

	public static void main(String[] args) {
		
		String month;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("월의 이름을 입력 : ");
		month = input.next();
		
		int monthNumber = 0;
		
		switch (month) {
		case "january":
			monthNumber = 1;
			break;
		case "february":
			monthNumber = 2;
			break;
		case "march":
			monthNumber = 3;
			break;
		default:
			monthNumber = 0;
			break;
		}
		
		System.out.println(monthNumber + "월");

	}

}
