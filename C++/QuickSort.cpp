#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int input[],int si,int ei)
{
    int count_small=0;
    int pi;
    for(int i=si;i<=ei;i++)
    {
        if(input[si]>input[i])
            count_small++;
    }
    pi=si+count_small;
    swap(&input[si],&input[pi]);
    int i=si;
    int j=ei;
    while(i<pi&&j>pi)
    {
    if(input[i]<input[pi])
    {
        i++;
    }
    else if(input[j]>=input[pi])
    {
        j--;
    }
    else 
    {
        swap(&input[i],&input[j]);
        i++;
        j--;
    }
    }
    return pi;
}


void quickSort(int input[],int si,int ei)
{
    //Base case 
    if(si>=ei)
        return;
    int c=partition(input,si,ei);
    quickSort(input,si,c-1);
    quickSort(input,c+1,ei);
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort(input,0,size-1);
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
