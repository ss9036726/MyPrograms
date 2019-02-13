import java.util.*;

//different ways to delete Element from the linked list 

class linkedList1{
	public static void main(String[] args){
		LinkedList<String> l1 = new LinkedList<String>();
		l1.add("Ravi");
		l1.add("Raj");
		l1.add("Vijay");
		l1.add("Ajay");
		l1.add("John");

		l1.remove("Vijay");

		l1.remove(1);

		LinkedList<String> l2 = new LinkedList<String>();
		l2.add("Sonoo");
		l2.add("Hanumat");

		l1.addAll(l2);
		System.out.println(l1);

		l1.removeAll(l2);
		System.out.println(l1);

		l1.removeFirst();
		System.out.println(l1);

		l1.removeLast();
		System.out.println(l1);
	}
}