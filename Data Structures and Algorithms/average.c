//KASHISH KOUL ----Enrollment no.- 03176803120//
#include<stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, avg;
    printf("Enter the marks obtained in five subjects:\n");
    scanf(" %f %f %f %f %f" , &sub1, &sub2, &sub3, &sub4, &sub5);
    
    if(sub1<0 || sub2<0 || sub3<0 || sub4<0 || sub5<0)
    printf("Marks cannot be in negetive. PLease enter a VALID NUMBER!!!");
    else if(sub1>100 || sub2>100 || sub3>100 || sub4>100 || sub5>100)
    printf("Marks cannot be greater than 100. PLease enter a VALID NUMBER!!!");
    else
    {
        total = sub1+sub2+sub3+sub4+sub5;
        avg = total/5;
        printf("Total marks are: %.2f\n" , total , "\n");
        printf("Average: %.2f\n" , avg);
    }
    return 0;
}
 
