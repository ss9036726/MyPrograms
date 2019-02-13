import java.util.*;

//Different Ways to add Elements in the Linke list 

class linkedList{
	public static void main(String[] args){
		LinkedList<String> l1 = new LinkedList<String>();
		l1.add("Ravi");
		l1.add("Vijay");
		l1.add("Ajay");

		System.out.println(l1);

		l1.add(1,"Gaurav");
		System.out.println(l1);

		LinkedList<String> l2 = new LinkedList<String>();
		l2.add("John");
		l2.add("Raj");

		l1.addAll(l2);
		System.out.println(l1);

		LinkedList<String> l3 = new LinkedList<String>();
		l3.add("Sonoo");
		l3.add("Hanumat");

		l1.addAll(1,l3);
		System.out.println(l1);

		l1.addFirst("Shubham");

		l1.addLast("Abhi");

		System.out.println(l1);
	}
}