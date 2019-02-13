import java.util.*;

class treeSet2{
	public static void main(String[] args){
		SortedSet <String> fruits = new TreeSet<>(Comparator.reverseOrder());

		fruits.add("Apple");
		fruits.add("PineApple");
		fruits.add("Banana");
		fruits.add("Orange");
		fruits.add("Mango");

		System.out.println(fruits);
	}
}