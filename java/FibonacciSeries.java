import java.util.Scanner;

class FibonacciSeries {

	public static int recFib(int n) {
       		
		if (n == 0 || n == 1) {
            		return n;
		}

		return recFib(n - 1) + recFib(n - 2);
    	}
	

	public static void fibonacci(int n) {
		
		int n1 = 0, n2 = 1;

		for(int i=0;i<n;i++) {

			System.out.print(n1 + " ");
          			int n3 = n2 + n1;
          			n1 = n2;
          			n2 = n3;
          
      		}
        
    	}

	public static void main(String args[]) {
		
	 	Scanner sc = new Scanner(System.in);
	 	
		System.out.println();
	 	System.out.print("Enter a number to generate fibonacci series upto nth term = ");
	 	int n=sc.nextInt();
	 	
	    	System.out.println("Fibonacci series upto " + n + " without using recursion is :-");
	    	fibonacci(n);
	   	System.out.println();
	   
	 	System.out.println("Fibonacci series upto " + n + " using recursion is :-");
	   	for (int i = 0; i < n; i++) { 
	            	System.out.print(recFib(i) + " ");
	    	}
        
	   	System.out.println();
        		System.out.println("010_Sarthak_Maheshwari_IT-3");
 
	}
}