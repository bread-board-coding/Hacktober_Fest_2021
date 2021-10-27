int coinChange(vector<int>& coins, int x) {
        
        vector<long long> dp(x+1,INT_MAX);
        
        dp[0]=0;
        
        for(int i=1;i<=x;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0){
                    long long subres = dp[i-coins[j]];                    
                        dp[i]=min(dp[i],1+subres);                    
                }
            }
        }
        
        if(dp[x]==INT_MAX) return -1;
        
        return dp[x];
        
    }
