package java1010;

import java.util.*;

public class ArrayProc {
	
	public void getValues(int[] array) {
		Scanner scan = new Scanner(System.in);
		
		for (int i = 0; i < array.length; i++) {
			System.out.println("성적을 입력하시오 : ");
			array[i] = scan.nextInt();
		}
	}
	
	public double getAverage(int[] array) {
		double total = 0;
		for (int i = 0; i < array.length; i++)
			total += array[i];
		return total / array.length;
	}
}
