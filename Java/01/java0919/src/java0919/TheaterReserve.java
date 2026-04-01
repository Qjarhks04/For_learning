package java0919;
import java.util.*;

public class TheaterReserve {

	public static void main(String[] args) {
		
		final int SIZE = 10;
		int a[] = new int[SIZE];
		int n = 0;
		Scanner scan = new Scanner(System.in);
		
		do {
			System.out.println("-----------------------------");
			System.out.println("1  2  3  4  5  6  7  8  9  10");
			System.out.println("-----------------------------");
			for(int i = 0; i < SIZE; i++)
				System.out.print(a[i] + "  ");
			
			System.out.println("\n");
			System.out.print("원하시는 좌석번호를 입력하세요(종료는 -1) : ");
			n = scan.nextInt();
			
			if (n == -1) {
				System.out.println("종료합니다.");
				break;
			} else if (a[n-1] == 0) {
				a[n-1] = 1;
				System.out.println("예약되었습니다.");
			} else {
				System.out.println("이미 예약된 좌석입니다.");
			}
			
			} while (n != -1);

	}

}
