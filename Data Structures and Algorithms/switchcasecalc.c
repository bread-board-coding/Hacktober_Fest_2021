
#include <stdio.h> 
int main()
{
    int choice;
    float num1 , num2 , c = 0;
    printf("Enter the First number : ");
    scanf("%f" , &num1 );
    printf("Enter the Second number : ");
    scanf("%f" , &num2 );
    printf("Press 1 for Addition \nPress 2 for Subtraction \nPress 3 for Multiplication \nPress 4 for Division\nPress 5 To find the Remainder:\n");
    printf("Enter your Choice : ");
    scanf("%d" , &choice);
    switch(choice)
    {
        case 1 : 
            c = num1 + num2;
            printf("Sum = %.2f\n" , c);
            break;
        case 2 : 
            c = num1 - num2 ;
            printf("Difference = %.2f\n",c );
            break;
        case 3:
            c = num1 * num2;
            printf("Product = %.2f\n" , c);
            break;
        case 4:
            if (num2==0)
                printf("Denominator cannot be zero\n");
            else
            {
            c = num1 / num2;
            printf("Quotient = %.2f\n" , c);
            } 
            break;
        case 5:
            if (num2==0)
                printf("Denominator cannot be zero\n");
            else 
            {
               c = (int)num1 % (int) num2;
               printf("Remainder = %.2f\n" , c);
            }
            break;
        default : 
            printf("Invalid choice !!!!  ");
    }
}