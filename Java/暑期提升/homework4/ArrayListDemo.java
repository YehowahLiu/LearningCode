import java.util.*;

class ArrayListDemo {
	public static void main(String[] args){
	// creat an array list
		ArrayList al = new ArrayList();
		System.out.println("Initial size of al: " + al.size());
	// add element to the array list
		al.add("C");
		al.add("A");
		al.add("E");
		al.add("B");
		al.add("D");
		al.add("F");
		al.add(1,"A2");
		System.out.println("size of al after additions: " + al.size());
	// display the array list
		System.out.println("Content of al: " + al);
	// remove element from array list
		al.remove("F");
		al.remove(2);
		System.out.println("size of al after deletion: " + al.size());
		System.out.println("Content of al :" + al);
	}
}
