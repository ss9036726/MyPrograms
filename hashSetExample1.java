import java.util.*;

class hashSetExample1{
	public static void main(String[] args){
		Set<Integer> h1 = new HashSet<Integer>();
		h1.add(5);
		h1.add(10);
		h1.add(15);
		h1.add(20);
		h1.add(25);

		System.out.println(h1);

		Set<Integer> h2 = new HashSet<Integer>();
		h2.add(3);
		h2.add(6);
		h2.add(9);
		h2.add(12);
		h2.add(15);

		h1.addAll(h2);

		System.out.println(h1);
	}
}