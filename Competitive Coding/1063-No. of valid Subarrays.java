public class Main {

  public static int validSubarrays(int[] nums) {
      
      int ans=0;
      Stack<Integer>st = new Stack<>();
      
      
      for(int i=nums.length-1;i>=0;i--)
      {
          int val=nums[i];
          
          while(st.size()>0 && nums[st.peek()]>=val)
          {
              st.pop();
          }
          
          int sl=nums.length;
          if(st.size()>0)
          {
              sl=st.peek();
          }
          
          ans+=sl-i;
          
          st.push(i);
      }
    return ans;
  }

/*
test cases
n-5

values
1
4
2
5
3
*/