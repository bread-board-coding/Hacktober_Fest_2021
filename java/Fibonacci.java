import java.util.Scanner;
class File {
  
    static void Fibonacci(int N)
    {
        int first = 0, second = 1;
        int t = 0;
        while (t < N) {
  
            System.out.print(first + " ");
  
            int num3 = second + first;
            first = second;
            second = num3;
            t = t + 1;
        }
    }

    static int FibonacciR(int n)
	{
        if (n <= 1)
            return n;
		return FibonacciR(n - 1) + FibonacciR(n - 2);
	}
  
    public static void main(String args[])
    {
        int N = 10;
	
        Fibonacci(N);

        System.out.println();

        for (int i = 0; i < N; i++) {
			System.out.print(FibonacciR(i) + " ");
		}
    }
}