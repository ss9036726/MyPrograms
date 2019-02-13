import java.util.*;

class hashMapExample2{
	public static void main(String[] args){
		Map<String,String> userCityMapping = new HashMap<String,String>();

		//check the map is Empty or not 
		System.out.println("The Map is Empty ot not : " + userCityMapping.isEmpty());

		userCityMapping.put("John", "New York");
        userCityMapping.put("Rajeev", "Bengaluru");
        userCityMapping.put("Steve", "London");

        //Calculate the size of the map 

        System.out.println("Size of the Map is : " + userCityMapping.size());

        //Search the given key is present in the map or not 

        String username = "Steve";

        if(userCityMapping.containsKey(username)){
        	System.out.println(username + " is present.");
        }else {
        	System.out.println(username + " is not present.");
        }

        //check the given value is present in the map or not 

        String city = "NewYork";
        if(userCityMapping.containsValue("NewYork")){
        	System.out.println("One user live in " + city);
        }else{
        	System.out.println("No user live in " + city);
        }

        System.out.println("Rajeev city " + userCityMapping.get("Rajeev"));
	}
}