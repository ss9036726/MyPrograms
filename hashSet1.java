import java.util.*;

class hashSet1{
	public static void main(String[] args){
		HashSet<String> h1 = new HashSet<String>();

		h1.add("Ravi");
		h1.add("John");
		h1.add("Ravi");
		h1.add("Vijay");

		Iterator itr = h1.iterator();

		while(itr.hasNext()){
			System.out.println(itr.next());
		}
	}
}