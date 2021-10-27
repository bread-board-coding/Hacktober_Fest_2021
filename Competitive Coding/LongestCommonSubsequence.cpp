int longestCommonSubsequence(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        
        vector<vector<int>> dp(2,vector<int>(m+1,-1));
        bool bi;
        for(int i=0;i<=n;i++){
            bi = i&1;
            for(int j=0;j<=m;j++){
                if(i==0 or j==0) dp[bi][j]=0;
                else{
                    
                    if(s1[i-1]==s2[j-1]) dp[bi][j] = 1 + dp[1-bi][j-1];
                    
                    else dp[bi][j] = max(dp[1-bi][j],dp[bi][j-1]);
                    
                    
                }
            }
        }
        
        return dp[bi][m];
        
    }
