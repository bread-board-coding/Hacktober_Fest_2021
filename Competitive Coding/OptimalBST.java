import java.io.*;
import java.util.*;
// optimal BST is the standard problem of dynamic Programming
public class Optimal_BST {
  
  private static void optimalbst(int[] keys, int[] freq, int n) {
      int[][] dp=new int[n][n];
      int[] fsa=new int[n];
      for(int x=0;x<n;x++) {
    	  if(x==0) fsa[x]=freq[x];
    	  else fsa[x]=freq[x]+fsa[x-1];
      }
      for(int g=0;g<n;g++){
          for(int i=0,j=g;j<n;i++,j++){
              if(g==0){
                  dp[i][j]=freq[i];
              }else if(g==1){
                  dp[i][j]=Math.min(freq[i]+2*freq[j],freq[j]+2*freq[i]);
              }else{
                  int min=Integer.MAX_VALUE;
                  int fsum=0;
                 // for(int x=i;x<=j;x++) fsum+=freq[x];
                  fsum= fsa[j]- i==0?0:fsa[i-1];
                  for(int k=i;k<=j;k++){
                     int left=k==i?0:dp[i][k-1];
                     int right = k==j?0:dp[k+1][j];
                     if(left+right+fsum<min) min=left+right+fsum ;
                  }
                  dp[i][j]=min;
              }
          }
      }
    System.out.println( dp[0][n-1]);
	}

    public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
	int[] keys = new int[n];
	int[] frequency = new int[n];
    for(int i= 0 ;i < n ; i++) {
		keys[i] = scn.nextInt();
	}
	for(int i = 0 ; i < n; i++){
      frequency[i] = scn.nextInt();
    }
	optimalbst(keys,frequency,n);
	}

}
