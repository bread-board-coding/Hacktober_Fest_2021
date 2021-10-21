//KASHISH KOUL ----Enrollment no.- 03176803120//
#include<stdio.h>
int main()
{
     int n1 = 0, n2 = 1, n3 = 0, i;
    printf("Enter a Positive Number: ");
    scanf("%d", &i);

    if(i<=0)
    printf("WRONG INPUT!!! Please enter a POSITIVE NUMBER");
    else
    printf("Fibonacci Series: %d, %d, ", n1, n2);
    n3 = n1 + n2;
    while (n3 <= i)
     {
        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    return 0;
}