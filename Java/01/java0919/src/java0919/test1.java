package java0919;

import java.util.Arrays;

public class test1 {

	public static void main(String[] args) {
		
		int[] List = {10, 20, 30, 40, 50};
		int[] numbers = List;
		
		for(int i = 0; i < List.length; i++)
			System.out.println(List[i] + " " + numbers[i] + " \n");
		
		int [] List_copy = Arrays.copyOf(List, List.length);
		List[4] = 70;
		
		for(int i = 0; i < List_copy.length; i++)
			System.out.println(List[i] + " " + List_copy[i] + "\n");

	}

}
