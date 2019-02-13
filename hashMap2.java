import java.util.*;

class hashMap2{
	public static void main(String[] args){
		HashMap<Integer,String> hm = new HashMap<Integer,String>();

		hm.put(100,"Amit");
		hm.put(101,"Vijay");
		hm.put(102,"Rahul");
		hm.put(103,"Gaurav");

		for(Map.Entry m:hm.entrySet()){
			System.out.println(m.getKey() + " " + m.getValue());
		}
		System.out.println();
		hm.replace(102,"Ravi");

		for(Map.Entry m: hm.entrySet()){
			System.out.println(m.getKey() + " " +m.getValue());
		}

		System.out.println();
		hm.replace(102,"Ravi","Vijay");

		for(Map.Entry m: hm.entrySet()){
			System.out.println(m.getKey() + " " +m.getValue());
		}
	}
}