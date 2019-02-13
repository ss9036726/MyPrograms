import java.util.*;

class hashMapExample1{
	public static void main(String[] args){
		Map<Integer,String> m1 = new HashMap<Integer,String>();

		m1.put(1,"One");
		m1.put(2,"two");
		m1.put(3,"three");
		m1.put(4,"four");
		m1.put(5,"five");

		System.out.println(m1);

		for(Map.Entry m: m1.entrySet()){
			System.out.println(m.getKey() + " " + m.getValue());
		}
	}
}