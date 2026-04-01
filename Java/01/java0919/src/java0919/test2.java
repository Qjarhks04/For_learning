package java0919;
import java.util.*;

public class test2 {

	public static void main(String[] args) {
		
		final int SIZE = 10;
		int[] numbers = new int[SIZE];
		
		for(int i = 0; i < numbers.length; i++) {
			int r = (int)(Math.random() * 100);
			
			numbers[i] = r;
		}
		
		System.out.print("최초의 리스트 : ");
		
		for(int r:numbers)System.out.print(r+"  ");
		
		Arrays.sort(numbers);
		System.out.print("\n정령된 리스트 : ");
		for(int r:numbers)System.out.print(r+"  ");

	}

}
