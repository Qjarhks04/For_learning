package java1017;

public class Employee1 {
	
	public String name;
	String address;
	protected int salary;
	private int rrn;
	
	public Employee1(String name, String address, int salary, int rrn) {
		this.name = name;
		this.address = address;
		this.salary = salary;
		this.rrn = rrn;
	}
	
	@Override
	public String toString() {
		return "Employee1 [name = " + name + ", address = " + address + ", salary = " + salary + ", rrn = " + rrn + "]";
	}

}
