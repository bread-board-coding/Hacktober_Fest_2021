// Generate and compute series x/1! - x/2! + x/3! - x/4! .............upto n th term

#include<iostream>
using namespace std;

double fact(double i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return i*fact(i-1);
    }
}

int main()
{
    double s,x,f;
    int k=0;
    cout<<"Enter the value of x : ";
    cin>>x;
    double n;
    cout<<"Enter the value of n : ";
    cin>>n;
    double result=0;

    for(double i=1;i<=n;i++)
    {
        if(k%2==0)
        {
            result=result+(x/fact(i));
        }
        else
        {
            result=result-(x/fact(i));
        }
        k++;
    }
    cout<<"The result is : "<<result;

    return 0;
}