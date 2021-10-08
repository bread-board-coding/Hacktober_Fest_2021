import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int sourceBase = scn.nextInt();
      int  destBase= scn.nextInt();
      int dn = anyBaseToAnyBase(n, sourceBase, destBase);
      System.out.println(dn);
   }   

   public static int anyBaseToAnyBase(int n, int sb, int db){
       int dec = anyBaseToDecimal(n, sb); // source base to decimal
       int ans = decimalToAnyBase(dec, db); // decimal to dest base
       return ans;
   }

   public static int anyBaseToDecimal(int n, int b){
       int ans = 0;

       int p = 1; // b ^ 0
       while(n > 0){
           int rem = n % 10;
           n = n / 10;

           ans = ans + rem * p;
           p = p * b;
       }

       return ans;
   }

   public static int decimalToAnyBase(int n, int b){
       int ans = 0;

       int p = 1; // 10 ^ 0
       while(n > 0){
           int rem = n % b;
           n = n / b;

           ans = ans + rem * p;
           p = p * 10;
       }

       return ans;
   }
  }