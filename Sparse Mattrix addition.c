#include <stdio.h>
#define sz 100

struct Sparse
{
int row,col,val;
};

typedef struct Sparse sparmat;

void readMat(sparmat a[])
{
int i;
printf("Enter rows&cols for matrix:");
scanf("%d %d", &a[0].row, &a[0].col);
printf("Enter no. of non-zero elements:");
scanf("%d", &a[0].val);
printf("Enter matrix in sparse form:\n");
for (i = 1; i <= a[0].val; i++)
{
scanf("%d %d %d", &a[i].row, &a[i].col, &a[i].val);
}
}

void readnewMat(sparmat c[])
{
printf("Final matrix after addition of 2 matrices order(m*n):");
scanf("%d %d", &c[0].row, &c[0].col);
}

void printMat(sparmat a[])
{
int i, j, k;
k = 1;

for (i = 0; i < a[0].row; i++)
{
for (j = 0; j < a[0].col; j++)
{
if (k <= a[0].val)
{
if (i == a[k].row && j == a[k].col)
{
printf("%8d", a[k].val);
k++;
}
else
{
printf("%8d", 0);
}
}
else
{
printf("%8d", 0);
}
}
printf("\n");
}
}

void add(sparmat a[], sparmat b[], sparmat c[])
{
int i = 1, j = 1, k = 1;
while (i <= a[0].val || j <= b[0].val)
{

if (a[i].row < b[j].row)
{
c[k].row = a[i].row;
c[k].col = a[i].col;
c[k].val = a[i].val;
k++;
i++;
}

else if (b[j].row < a[i].row)
{
c[k].row = b[j].row;
c[k].col = b[j].col;
c[k].val = b[j].val;
k++;
j++;
}

else if (a[i].row == b[j].row && a[i].col < b[j].col)
{
c[k].row = a[i].row;
c[k].col = a[i].col;
c[k].val = a[i].val;
k++;
i++;
}

else if (a[i].row == b[j].row && b[j].col < a[i].col)
{
c[k].row = b[j].row;
c[k].col = b[j].col;
c[k].val = b[j].val;
k++;
j++;
}

else if (a[i].row == b[j].row && a[i].col == b[j].col)
{
c[k].row = a[i].row;
c[k].col = a[i].col;
c[k].val = a[i].val + b[j].val;
k++;
i++;
j++;
}
}
c[0].val = k;
}

int main()
{
sparmat a[sz];
sparmat b[sz];
sparmat c[sz];
readMat(a);
readMat(b);
readnewMat(c);
add(a,b,c);
printMat(a);
printf("\n+\n");
printMat(b);
printf("\n=\n");
printMat(c);
return 0;
}
