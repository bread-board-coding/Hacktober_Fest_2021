#include <iostream>

using namespace std;
int binary(int arr[],int p,int q,int x){
    int mid;
    mid=(p+q)/2;
    if(p<=q){
    if(arr[mid]==x){
    return mid;
}
    else if(arr[mid]>x){ 
    binary(arr,mid+1,q,x);
    }
    else{
    binary(arr,p,mid-1,x);
    }
    }
    
        return -1;
}

int main()
{
    int m,n,i,x,s,r;
    cin>>r>>x;
    m=0,n=r-1;
    int a[r];
    for(i=0;i<r;i++)
    cin>>a[i];
   s=binary(a,m,n,x);
   cout<<"searching element is present in index "<<s;
    

     
    return 0;
}
