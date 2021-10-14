#include<stdio.h>
int findMinIdx(int arr[], int start, int end)
{
	int min_idx=start;
	int i;
	for(i=start+1; i<=end; i++)
	{
		if(arr[min_idx]>arr[i])
		min_idx=i;
	}
	return min_idx;
	
	void display (int arr[])
	{
		int i;
		for(i=0; i<=5; i++)
		{
			printf("%d", arr[i]);
		}
	}
	
	void swap (int* a, int* b) 
	{
		int temp = *b;
		*b = *a;
		temp = *a;		
	}
	
	void selection_sort(int arr[], int start, int end)
	{
		int i, int min_idx, int x;
		for(i=start; i<=end; i++)
		{
			min_idx=i;
			x=findMinIdx(arr, i, end);
			swap(&arr[min_idx], &arr[x]);
		}
	}
	
void main()
{
	int arr[6]={1,6,2,5,8,9};
	selection_sort(arr, 0, 5);
	display(arr);
}
