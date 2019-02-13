import java.util.*;

class arrayList4{
	public static void main(String[] args){
		ArrayList<String> a1 = new ArrayList<String>();
		System.out.println("List is empty or not : " + a1.isEmpty());

		a1.add("Ravi");
		a1.add("John");
		a1.add("Ajay");

		System.out.println("Now the list is empty or not : " + a1.isEmpty());
	}
}