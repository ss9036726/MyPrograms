import java.util.*;

class hashSetExample2{
	public static void main(String[] args){

		Set<String> popularCities = new HashSet<>();

		System.out.println("Set is Empty or not : " + popularCities.isEmpty());

		popularCities.add("London");
        popularCities.add("New York");
        popularCities.add("Paris");
        popularCities.add("Dubai");

        //Size of the set 

        System.out.println("Size of the Set is : " + popularCities.size());

        //Search value in the set 

        String city = "Paris";

        if(popularCities.contains(city)){
        	System.out.println(city +  " is a popular city .");
        }else{
        	System.out.println(city + " is not popular city .");
        }
	}
}