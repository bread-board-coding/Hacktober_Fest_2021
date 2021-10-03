
public class Matrix_chain_multiplication {
  // recursive approach expon complexity
	 static int matrixMultiplication(int N, int arr[])
	    {
	       return solve(arr,1,N-1);
	    }
	    static int min=Integer.MAX_VALUE;
	    static int solve(int[] a,int i,int j){
	        if(i>=j) return 0;
	        for(int k=i;k<j;k++){
	            int temp=solve(a,i,k)+solve(a,k+1,j)+ a[i-1]*a[k]*a[j];
	            if(min>temp) min=temp;
	        }
	        return min;
	    }
	    // memoization 
	    static int matrixChainMemoised(int[] p, int i, int j)
	    {
	      if (i == j) 
	      {
	        return 0;
	      }
	      if (dp[i][j] != -1) 
	      {
	        return dp[i][j];
	      }
	      dp[i][j] = Integer.MAX_VALUE;
	      for (int k = i; k < j; k++) 
	      {
	        dp[i][j] = Math.min(
	          dp[i][j], matrixChainMemoised(p, i, k)
	          + matrixChainMemoised(p, k + 1, j)
	          + p[i - 1] * p[k] * p[j]);
	      }
	      return dp[i][j];
	    }
	   
	    static int MatrixChainOrder(int[] p, int n)
	    {
	      int i = 1, j = n - 1;
	      return matrixChainMemoised(p, i, j);
	    }
	    // o(n3) 
	int mcm(int[] arr) {
		int n=arr.length;
		int[][] dp=new int[n-1][n-1];
		for(int g=0;g<n-1;g++) {
			for(int i=0,j=g;j<n-1;j++,i++) {
				if(g==0) {
					dp[i][j]=0;
				}else if(g==1) {
					dp[i][j]=arr[i]*arr[j]*arr[j+1];
				}else {
					int min=Integer.MAX_VALUE;
					for(int k=i;k<j;k++) {
						// dp-> i to k left half ,  k+1 to j right half
						// arr -> i*k+1 left half , k+1, j+1 right half
						int lc=dp[i][k];
								int rc=dp[k+1][j];
								int mult=arr[i]*arr[k+1]*arr[j+1];
								 int tc=lc+rc+mult;
								 min=Math.min(min, tc);
					}
					dp[i][j]=min;
				}
			}
		}
		return dp[0][dp.length-1];
		
	}
}
