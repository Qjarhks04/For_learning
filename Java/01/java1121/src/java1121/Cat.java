package java1121;

public class Cat extends Animal {
	
	public static void eat() {
		System.out.println("Cat의 정저게소드 eat");
	}
	public void sound() {
		System.out.println("Cat의 인스턴스 메소드sound()");
	}

	public static void main(String[] args) {
		Cat myCat=new Cat();
		Animal myAnimal=myCat;
		Animal.eat();
		myAnimal.sound();
	}

}
