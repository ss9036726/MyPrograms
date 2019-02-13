import java.util.*;

class Book{
	int id;
	String name,author,publisher;
	int quantity;
	public Book(int id,String name,String author,String publisher,int quantity){
		this.id = id;
		this.name = name;
		this.author = author;
		this.publisher = publisher;
		this.quantity = quantity;
	}
}

class hashMap3{
	public static void main(String[] args){
		Map<Integer,Book> map1 = new HashMap<Integer,Book>();

		Book b1=new Book(101,"Let us C","Yashwant Kanetkar","BPB",8);    
    	Book b2=new Book(102,"Data Communications & Networking","Forouzan","Mc Graw Hill",4);    
    	Book b3=new Book(103,"Operating System","Galvin","Wiley",6);

    	//Adding Books to Map

    	map1.put(1,b1);
    	map1.put(2,b2);
    	map1.put(3,b3);

    	//Traversing Map

    	for(Map.Entry<Integer,Book> m:map1.entrySet()){
    		int key = m.getKey();
    		Book b = m.getValue();

    		System.out.println(key + " Details");
    		System.out.println(b.id + " " + b.name + " " + b.author + " " +b.publisher + " " + b.quantity);
    	}
	}
}