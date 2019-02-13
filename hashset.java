import java.util.*;

class hashSet{
	public static void main(String[] args){
		HashSet<String> h = new HashSet<String>();
		h.add("One");
		h.add("two");
		h.add("three");
		h.add("four");
		h.add("five");

		Iterator<String> itr = h.iterator();
		while(itr.hasNext()){
			System.out.println(itr.next());
		}
	}
}