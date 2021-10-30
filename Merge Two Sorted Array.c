#include<stdio.h>

void merge(int*a,int*b,int*c,int m,int n)
{
int i=0,j=0,k=0;
while(i<m && j<n)
{
if(a[i]<=b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}

while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{

c[k]=b[j];
j++;
k++;
}

}

int main()
{
int a[30],b[30],c[60],m,n,i,j,k;

printf("Enter the size and array in sorted order of first array:\n");
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the size and array in sorted order of second array:\n");
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}

merge(a,b,c,m,n);

printf("Merge sorted Array is:\n");
for(k=0;k<(m+n);k++)
{
printf("%d ",c[k]);
}
}
