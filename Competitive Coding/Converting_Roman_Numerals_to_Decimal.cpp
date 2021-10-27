// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        map<char, int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    
    
   
    int x;
    int sum=0;
    for(int i=0;i<s.length(); i++)
    {
       if(m[s[i]]<m[s[i+1]]) 
       {
           x=m[s[i]]*(-1);
           sum+=x;
       }
       else
       {
           sum+=m[s[i]];
       }
       
    }
    
    return sum;
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
