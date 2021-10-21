#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)  // prints spaces
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)  // prints numbers
        {
            cout<< j;
        }

        cout<<"\n";
    }

    return 0;
}



