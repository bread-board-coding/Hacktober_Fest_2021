#include<iostream>
using namespace std;

int main()
{
    int n,pow1;
    cout<<"Enter a number:- ";
    cin>>n;
    cout<<"Enter power of a number:- ";
    cin>>pow1;
    int ans=1;
    for(int i=1;i<=pow1;i++)
    {
        ans=ans*n;
    }
    cout<<"Output:- "<<ans;
    return 0;
}