#include <iostream>

using namespace std;


int bubblesort(int arr[], int n)
{ int i;
    int temp;
    for( i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                            }
        }
    }

    for(int i=0;i<n-1;i++)
    {
        cout << arr[i]<<" ";
    }
    return arr[i];
}



int main()
{ int n;
int arr[20];
    cout << "Enter value of n :" << endl;
    cin >> n;

    cout <<" Enter value of array :"<<endl;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int result = bubblesort(arr, n);
    cout << result;

    return 0;
}
