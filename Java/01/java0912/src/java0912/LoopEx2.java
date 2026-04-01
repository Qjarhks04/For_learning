package java0912;
import java.util.*;

public class LoopEx2 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int n;
		int i = 1;
		
		System.out.println("구구단 중에서 출력하고 싶은 단을 입력 : ");
		n = scan.nextInt();
		
		while (i < 10) {
			
			System.out.println(n + " X " + i + " = " + n * i);
			i++;
			
		}

	}

}
