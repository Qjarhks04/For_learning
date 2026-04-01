package java0912;
import java.util.*;

public class Welcome {

	public static void main(String[] args) {
		
		Date date = new Date();
		int currentHour = date.getHours();
		
		System.out.println("현재시간은 : " + date);
		
		if (currentHour < 11) {
			System.out.println("Good morning");
		} else if (currentHour < 15) {
			System.out.println("Good afternoon");
		} else if (currentHour < 20) {
			System.out.println("Good evening");
		} else {
			System.out.println("Good night");
		}

	}

}
