#include <iostream>

using namespace std;

int find(int arr[], int n)
{
    int first = arr[0];
    int second = arr[1];
    int temp;

    if(first < second)
    {
        temp = first;
        first = second;
        second = temp;
    }

    for(int i=2;i<n;i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }

        else if(arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout<<first<<endl;
    cout<<second<<endl;
}

int main()

{
    int n;
    int arr[20];
    cout <<"Enter value of n :"<<endl;
    cin >> n;
    cout << "Enter value of array" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    find(arr, n);
    return 0;
}
