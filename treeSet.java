import java.util.*;

class treeSet{
	public static void main(String[] args){
		SortedSet <String> fruits = new TreeSet<String>();

		fruits.add("Apple");
		fruits.add("Banana");
		fruits.add("PineApple");
		fruits.add("Orange");

		System.out.println(fruits);

		//Duplicate value is ignored

		fruits.add("Apple");

		System.out.println(fruits);

		fruits.add("banana");

		System.out.println(fruits);
	}
}