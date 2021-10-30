#include <stdio.h>
void merge(int *A, int l, int mid, int h)
{
int i = l, j = mid + 1, k = l;
int B[100];
while (i <= mid && j <= h)
{
if (A[i] < A[j])
B[k++] = A[i++];
else
B[k++] = A[j++];
}
for (; i <= mid; i++)
B[k++] = A[i];
for (; j <= h; j++)
B[k++] = A[j];
for (i = l; i <= h; i++)
A[i] = B[i];
}
void Imerge_Sort(int *A, int n)
{
int len=1,i;
for (len; len <n; len = len * 2)
{
for (i = 0; i<n; i = i + 2*len)
{
int l = i;
int h= i+((2*len)-1);
int mid= (l+h)/2;
if(h>=n){
h=n-1;
}
merge(A, l, mid, h);
}
}
}

int main()
{
int n,i;
printf("Enter the size of array:\n");
scanf("%d",&n);
int A[30];
printf("Enter the elements:\n");
for ( i = 0; i < n; i++)
{
scanf("%d",&A[i]);
}
Imerge_Sort(A, n);
printf("Sorted array is:\n");
for( i = 0; i < n; i++)
printf("%d ",A[i]);
return 0;
}
