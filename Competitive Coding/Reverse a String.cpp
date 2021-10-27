void reverseString(vector<char>& s) {
        int j=s.size()-1;
        char a;
        for(int i=0;i<=j;i++){
           a= s[i];
           s[i]= s[j];
           s[j]=a;
            j--;
        }
    }
