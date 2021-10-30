#include <iostream>

using namespace std;




int binarysearch(int arr[], int l, int r, int x)
{
    if(r>=l){

        int mid = l+(r-1)/2;


    if(arr[mid] == x)

        return mid;


    if(arr[mid] > x)

        return binarysearch(arr, l, mid-1, x);


    else

        return binarysearch(arr, mid+1, r, x);

    }
    return -1;
}
int main()
{
    int arr[20];
    int x,n;


    cin >>n;

    cout<< "enter element in array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<<"enter element to search"<<endl;
    cin >> x;
    int result = binarysearch(arr, 0, n-1, x);


    if(result == -1)
    {
        cout << "element not found"<<endl;
    }
    else{
        cout << "element found at "<< result;
    }
    return 0;
}
