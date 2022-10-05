//Write a program to check if given character is digit or not.
#include<stdio.h>

int main() {
          char ch;
          printf("Enter a Character : ");
          scanf("%c",&ch);
          if(ch>'0' && ch<='9'){
              printf("Your Entered Character is a Digit : %c",ch);  
          }
          else{
              printf("Entered Character is not Digit!!");
          }
return 0;
}