import java.util.*;

class priorityQueue{
	public static void main(String[] args){
		PriorityQueue<Integer> ob1 = new PriorityQueue<Integer>();

		ob1.add(100);
		ob1.add(750);
		ob1.add(600);
		ob1.add(500);
		ob1.add(1000);

		while(!ob1.isEmpty()){
			System.out.println(ob1.remove());
		}
	}
}