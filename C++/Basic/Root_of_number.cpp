// Square Root (Integral)
// Given a number N, find its square root. You need to find and print only the integral part of square root of N.
// For eg. if number given is 18, answer is 4.
// Input format :
// Integer N
// Output Format :
// Square root of N (integer part only)
// Constraints :
// 0 <= N <= 10^8
// Sample Input 1 :
// 10
// Sample Output 1 :
// 3
// Sample Input 2 :
// 4
// Sample Output 2 :
// 2

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number:-";
    cin>>n;

    int output=0;
    while(output*output<=n)
    {
        output+=1;
    }

    output-=1;

    cout<<"Ans:"<<output;
    return 0;
}