import java.util.*;

class createHashSet{
	public static void main(String[] args){
		Set<String> ob1 = new HashSet<String>();

		ob1.add("Monday");
		ob1.add("Tuesday");
		ob1.add("Wednesday");
		ob1.add("Thrusday");
		ob1.add("Friday");
		ob1.add("Saturday");
		ob1.add("Sunday");

		System.out.println(ob1);

		//add duplicate Element will be ignored 

		ob1.add("Monday");

		Iterator itr = ob1.iterator();

		while(itr.hasNext()){
			System.out.println(itr.next());
		}
	}
}