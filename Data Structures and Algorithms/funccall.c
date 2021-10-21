//KASHISH KOUL ----Enrollment no.- 03176803120//
#include<stdio.h>
int swapvalue (int , int);
int swapreference (int* , int*);
void main(){
    int m,n ;
    float c;
    printf("Enter 1st variable = ");
    scanf("%d" , &m);
    printf("Enter 2nd variable = ");
    scanf("%d" , &n);
    swapvalue(m , n);
    printf("Values after calling variables by value\n");
    printf("1st variable = %d \n2nd variable = %d\n" , m , n);

    swapreference(&m , &n);
    printf("Values after calling variables by reference\n");
    printf("1st variable = %d \n2nd variable: = %d\n" , m , n);
}
int swapvalue(int x , int y){
    float temp;
    temp = x;
    x = y;
    y = temp;
    return x , y ;
}
int swapreference(int *x , int *y){
    float temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return *x , *y ;
}
