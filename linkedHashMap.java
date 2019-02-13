import java.util.*;

class linkedHashMap{
	public static void main(String[] args){
		LinkedHashMap <String,Integer> wordNumberMap = new LinkedHashMap<>();

		wordNumberMap.put("one",1);
		wordNumberMap.put("two",2);
		wordNumberMap.put("three",3);
		wordNumberMap.put("four",4);
		wordNumberMap.put("five",5);

		System.out.println(wordNumberMap);
	}
}