import java.util.*;

class hashMap{
	public static void main(String[] args){
		HashMap<Integer,String> hm = new HashMap<Integer,String>();
        
		//Insert value in the hashmap

        hm.put(100,"Amit");
        hm.put(101,"Vijay");
        hm.put(102,"Rahul");

        for(Map.Entry m:hm.entrySet()){
        	System.out.println(m.getKey() + " " + m.getValue());
        }
        System.out.println();
        System.out.println();

        //putIfAbsent() Method 

        hm.putIfAbsent(103,"Gaurav");

        for(Map.Entry m:hm.entrySet()){
        	System.out.println(m.getKey() + " " + m.getValue());
        }

		System.out.println();
        System.out.println();

        HashMap<Integer,String> map = new HashMap<Integer,String>();

        map.put(104,"Ravi");

        map.putAll(hm);

        for(Map.Entry m:map.entrySet()){
        	System.out.println(m.getKey() + " " + m.getValue());
        }
	}
}