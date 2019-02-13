import java.util.*;

class Student{
	int rollno;
	String name;
	int age;
	public Student(int rollno,String name,int age){
		this.rollno=rollno;
		this.name=name;
		this.age=age;
	}
}

public class arrayList1{
	public static void main(String[] args){
		Student s1=new Student(101,"Sonoo",23);  
  		Student s2=new Student(102,"Ravi",21);  
  		Student s3=new Student(103,"Hanumat",25);  

  		ArrayList<Student> ob1 = new ArrayList<Student>();

  		ob1.add(s1);//adding Student class object  
  		ob1.add(s2);  
  		ob1.add(s3); 

  		//Iterator itr = ob1.iterator();

  		/*while(itr.hasNext()){
  			Student st = (Student)itr.next();
  			System.out.println(st.rollno+" "+st.name+" "+st.age);
  		}*/

  		for(Student st:ob1){
  			System.out.println(st.rollno+" "+st.name+" "+st.age);
  		}
	}
}