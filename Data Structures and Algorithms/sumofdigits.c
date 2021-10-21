//KASHISH KOUL ----Enrollment no.- 03176803120//
#include <stdio.h> 
int main()
{
    int num , sum=0 , temp , k;
    printf("Enter a 3 digit number : ");
    scanf("%d" , &num);

    k = num ;

    while(k!=0)
    {
        temp = k % 10 ;
        sum = sum + temp ;
        k = k / 10 ;
    }

   printf("Sum of the digits of a 3 digit number is : %d\n" , sum);
   return 0;

}



