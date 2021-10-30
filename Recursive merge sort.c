#include<stdio.h>
void merge(int arr[], int l, int m, int r)
{

int i, j, k;
int n1 = m - l + 1;  
int n2 = r - m;
int a1[n1], a2[n2];

for (i = 0; i < n1; i++)
a1[i] = arr[l + i];

for (j = 0; j < n2; j++)
a2[j] = arr[m + 1 + j];

i = 0;
j = 0;
k = l;

while (i < n1 && j < n2)
{
if (a1[i] <= a2[j])
arr[k++] = a1[i++];

else
arr[k++] = a2[j++];
}

while (i < n1)
arr[k++] = a1[i++];

while (j < n2)
arr[k++] = a2[j++];
}

void merge_Sort(int arr[], int l, int r)
{

if (l < r)
{
int m = l + (r - l) / 2;

merge_Sort(arr, l, m);
merge_Sort(arr, m + 1, r);
merge(arr, l, m, r);
}

}

int main()
{

int n;
printf("Enter the size of array:\n");
scanf("%d", &n);

int a[100],i;

printf("Enter elements of array:\n");

for(i=0;i<n;i++)
scanf("%d", &a[i]);

merge_Sort(a, 0, n - 1);

printf("\nSorted array is: \n");


for (i = 0; i < n; i++)
printf("%d ", a[i]);

return 0;

}
