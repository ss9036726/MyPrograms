//All Add Method in java Collections 

import java.util.*;

class arrayList2{
	public static void main(String[] args){
		ArrayList<String> a1 = new ArrayList<String>();
		a1.add("Ravi");
		a1.add("Vijay");
		a1.add("Ajay");

		System.out.println("Using add() method" + a1);

		a1.add(1,"Gaurav");
		System.out.println("Adding value at specific position " + a1);

		ArrayList<String> a2 = new ArrayList<String>();

		a2.add("Sonoo");
		a2.add("Hanumat");

		//Adding Second List element to the first 

		a1.addAll(a2);

		System.out.println("Adding Second List to the first list : " + a1);

		//Add a list to the specific postition of another list 

		ArrayList<String> a3 = new ArrayList<String>();
		a3.add("John");
		a3.add("Rahul");

		a1.addAll(1,a3);

		System.out.println(a1);
	}
}