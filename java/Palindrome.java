import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
			
		System.out.println();
		System.out.print("Enter a string: ");
	    	String original = sc.next(); 
	    	String reverse = "";  
	       
	    	for(int i = original.length() - 1; i >= 0; i--) {
	    		reverse = reverse + original.charAt(i);
	    	}
	           
	    	if(original.equals(reverse)) {
	    		System.out.println("String is palindrome");
	    		System.out.println("010_Sarthak_Maheshwari_IT-3");
	    	}
	   	else {
	    		System.out.println("String is not palindrome");
	    		System.out.println("010_Sarthak_Maheshwari_IT-3");
	   	 }

	}

}


