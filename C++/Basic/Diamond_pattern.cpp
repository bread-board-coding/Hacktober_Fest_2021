#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n/2;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            if(j<i*2+1)
            cout<<"*";
            else
            cout<<" ";
        }
        
        cout<<endl;
    }

    //lower 
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(j<=i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}