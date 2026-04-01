package java0919;

import java.util.*;

public class TicTacToe {

	public static void main(String[] args) {
		
		char[][] board = new char[3][3];
		int x, y;
		
		Scanner scan = new Scanner(System.in);
		
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
					board[i][j] = ' ';
		
		do {
			for (int i = 0; i < 3; i++) {
				System.out.println(" " + board[i][0] + "| " +board[i][1] + "| " + board[i][2]);
				if (i != 2)System.out.println("--|--|--");
			}
			
			System.out.print("다음 수의 좌표를 입력하시오: ");
			x = scan.nextInt();
			y = scan.nextInt();
			
			if (board[x][y] != ' ') {
				System.out.println("잘못된 위치입니다. ");
				continue;
			} else
				board[x][y] = 'X';
			int i = 0, j = 0;
			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++)
					if (board[i][j] == ' ')
						break;
				if (board[i][j] == ' ')
					break;
			}
			if (i < 3 && j < 3)
				board[i][j] = 'O';
		} while (true);

	}

}
