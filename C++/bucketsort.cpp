
#include <algorithm>

#include <iostream>

#include <vector>

using namespace std;

void bucketSort(float arr[], int n)
{
	
	// 1) Create n empty buckets
	vector<float> b[n];

  
	// 2) Put array elements 
	for (int i = 0; i < n; i++) {
		int bi = n * arr[i];
		b[bi].push_back(arr[i]);
	}

  
	// 3) Sort 
	for (int i = 0; i < n; i++)
		sort(b[i].begin(), b[i].end());

  
	// 4) Concatenate all
	int index = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < b[i].size(); j++)
			arr[index++] = b[i][j];
}

/* Driver program to test above function */
int main()
{
	float arr[]
		= { 0.8437, 0.52355, 0.6346, 0.123 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bucketSort(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
