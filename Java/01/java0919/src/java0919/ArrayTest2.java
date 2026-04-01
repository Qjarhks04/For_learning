package java0919;
import java.util.*;

public class ArrayTest2 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int[] a = new int[5];
		int b = 0;
		
		for (int i = 0; i < a.length; i++) {
			
			System.out.print("성적 입력 : ");
			a[i] = scan.nextInt();
			b += a[i];
			
		}
		
		b /= a.length;
		System.out.println("평균 성적은 : " + b + "입니다.");

	}

}
