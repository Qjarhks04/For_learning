package java1017;

public class EmployeeTest {

	public static void main(String[] args) {
		
		Employee e1, e2, e3;
		e1 = new Employee("김철수", 35000);
		e2 = new Employee("최수철", 50000);
		e3 = new Employee("김철호", 20000);
		
		int n = Employee.getCount();
		System.out.println("현재의 직원수 = " + n);
	}

}
