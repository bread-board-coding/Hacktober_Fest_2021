//sorted array using bubble sort
#include<iostream>
using namespace std;

int main()
{

    int i,n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter Elements : \n";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
//bubble sort logic
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
  //sorted array
    cout<<"*****SORTED ARRAY*****\n";
    for(int i=0;i<n;i++)
    {
      cout<<i+1<<" : "<<a[i]<<"\n";
    }
}
