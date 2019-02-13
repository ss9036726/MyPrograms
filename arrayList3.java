import java.util.*;

class arrayList3{
	public static void main(String[] args){
		ArrayList<String> a1 = new ArrayList<String>();
		a1.add("Ravi");
		a1.add("Vijay");
		a1.add("Ajay");
		a1.add("Sonoo");
		a1.add("Hanumat");

		System.out.println("List is " + a1);

		//Removing Element 

		a1.remove("Vijay");
		System.out.println(a1);
		//Removing element in specific position

		a1.remove(1);
		System.out.println(a1);

		ArrayList<String> a2 = new ArrayList<String>();

		a2.add("John");
		a2.add("Yo");

		a1.addAll(a2);
		System.out.println(a1);

		//remove all the new add value in the list 

		a1.removeAll(a2);
		System.out.println(a1);

		a1.clear();
		System.out.println(a1);

	}
}