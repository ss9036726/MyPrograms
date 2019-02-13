import java.util.*;

class hashSet3{
	public static void main(String[] args){
		HashSet<String> h1 = new HashSet<String>();

		h1.add("Ravi");
		h1.add("John");
		h1.add("Ram");
		h1.add("Vijay");

		System.out.println(h1);

		h1.remove("Ravi");

		System.out.println(h1);

		HashSet<String> h2 = new HashSet<String>();

		h2.add("Sonoo");
		h2.add("Hanumat");

		System.out.println(h2);

		h1.addAll(h2);

		System.out.println(h1);

		h1.removeAll(h2);

		System.out.println(h1);
	}
}