//The number of switches required to make an array sorted is termed as inversion count
#include<iostream>
 
using namespace std;
 
int CountInversion(int a[], int n)
{
	int i, j, count = 0;
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
			if(a[i] > a[j])
				count++;
	}
	return count;
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	// Printing the number of  inversion in the array.
	cout<<"\nThe number of  inversion in the array: "<<CountInversion(arr, n);
 
	return 0;
}