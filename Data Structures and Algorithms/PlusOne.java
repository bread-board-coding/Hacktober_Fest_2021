PLUS ONE 
 



class Solution {
    static ArrayList<Integer> increment(ArrayList<Integer> arr , int N) {
        int n=N;
        arr.set(n-1,arr.get(n-1)+1);
        int c=arr.get(n-1)/10;
        arr.set(n-1,arr.get(n-1)%10);
        
        for(int i=n-2;i>=0;i--){
            if(c==1){
                arr.set(i,arr.get(i)+1);
                c=arr.get(i)/10;
                arr.set(i,arr.get(i)%10);
            }
        }
        
        if(c==1){
            arr.add(0,1);
        }
        return arr;
        
    }
};
