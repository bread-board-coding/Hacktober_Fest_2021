/* Write a program to print the smallest number of two. */
#include<stdio.h>
int main(){
    int a , b;
    printf("Enter a  numbers A :");
    scanf("%d",&a);
    printf("Enter a  numbers B :");
    scanf("%d",&b);
  if(a<b){
         printf("A is the smallest no." ,&a);
    
    } else if(b<a){
       printf("B is the smallest no." ,&b);
    }
    else{
        printf("Both number are Equal");
    }

}