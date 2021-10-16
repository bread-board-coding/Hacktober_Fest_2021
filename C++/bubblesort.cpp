#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter 10 numbers"<<endl;
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    for(int i=1; i<10; i++){
        for(int j=0; j<10-i; j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;
            }
        }
    }
    cout<<"array after sorting"<<endl;
     for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}