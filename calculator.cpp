// C++ Program of Simple Calculator using switch case

#include<iostream>
using namespace std;
int main(){

    float a, b;    //two float data type variables a and b
    char op;       //char data type variable op

    cout<<"Enter the operation(+,-,*,/) : ";
    cin>>op;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    switch(op){
    case '+':
        cout<<"Summation ="<<a+b;   //adds
        break;
    case '-':
         cout<<"Subtraction="<<a-b;     //subtracts
        break;
    case '*':
         cout<<"Multiplication ="<<a*b;    //multiplies
        break;
    case '/':
        cout<<"Division ="<<a/b;   //divides
        break;
    default:
        printf("Invalid operator");
    }

    return 0;
}


