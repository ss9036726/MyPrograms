import java.util.*;

class treeSet1{
	public static void main(String[] args){
		SortedSet<String> fruits = new TreeSet<>(String.CASE_INSENSITIVE_ORDER);

		fruits.add("Apple");
		fruits.add("Banana");
		fruits.add("PineApple");
		fruits.add("Mango");
		fruits.add("Orange");

		System.out.println(fruits);

		//Now, lowerCase Elements will also considered as duplicate

		fruits.add("banana");
		fruits.add("apple");

		System.out.println(fruits);
	}
}