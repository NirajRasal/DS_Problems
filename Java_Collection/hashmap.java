/*
Java HashMap class implements the Map interface which allows us 
to store key and value pair, where keys should be unique. */

/*
https://www.javatpoint.com/working-of-hashmap-in-java
 HashMap is a part of the Java collection framework. It uses a technique called Hashing.
 It implements the map interface. It stores the data in the pair of Key and Value. 
 HashMap contains an array of the nodes, and the node is represented as a class. It uses an array and
 LinkedList data structure internally for storing Key and Value.
*/
import java.util.*;  
public class hashmap
{  
 public static void main(String args[])
 {  
   HashMap<Integer,String> map=new HashMap<Integer,String>();       //Creating HashMap    
   map.put(1,"Mango");  //Put elements in Map  
   map.put(2,"Apple");    
   map.put(3,"Banana");   
   map.put(4,"Grapes"); 
   map.put(4,"Oranges");   
   map.put(10,"vishal");
   map.put(30,"sachin");
   map.put(20,"vaibhav");
   map.putIfAbsent(20, "random");     //puts the element if key is absent in map else not


   System.out.println(map);   //printing object map elements

   if(map.containsKey(2))     //check whether key is present or not
   {
     System.out.println("key is present");;
   }


       
   System.out.println("Iterating Hashmap...");  
   for(Map.Entry m : map.entrySet()){    
    System.out.println(m.getKey()+" "+m.getValue());    
   }  
}  
}  