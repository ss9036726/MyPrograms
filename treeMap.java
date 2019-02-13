import java.util.*;

class treeMap{
	public static void main(String[] args){
		SortedMap<String,String> fileExtension = new TreeMap<>();

		fileExtension.put("python",".py");
		fileExtension.put("c++",".cpp");
		fileExtension.put("kotlin",".kt");
		fileExtension.put("java",".java");
		fileExtension.put("golang",".go");

		System.out.println(fileExtension);
	}
}