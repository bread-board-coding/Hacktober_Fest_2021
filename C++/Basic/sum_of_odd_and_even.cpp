#include<iostream>
using namespace std;

int main()
{
    int n=5566810;
    // cout<<"Enter a number:- ";
    // cin>>n;


    int evenSum=0;
    int oddSum=0;

    while(n>0)
    {
        int x=n%10;
        n=n/10;
        if(x%2==0)
        {
            evenSum+=x;
        }

        else
        {
            oddSum+=x;
        }
    }

    cout<<"EvenSum:-"<<evenSum<<"  OddSum:-"<<oddSum;
    return 0;
}