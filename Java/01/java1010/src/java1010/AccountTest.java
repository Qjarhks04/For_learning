package java1010;

public class AccountTest {

	public static void main(String[] args) {
		
		Account obj = new Account();
		obj.setName("Jung");
		obj.setBalance(1000000);
		
		System.out.println("이름은 " + obj.getName() + " 통장 잔고는 " + obj.getBalance() + "입니다.");

	}

}
