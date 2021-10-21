#include <iostream>
using namespace std;

void merge(int input[],int si,int ei,int mid)
{
    int *output=new int[ei+1];
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=ei)
    {
        if(input[i]<input[j])
        {
            output[k]=input[i];
            i++;
            k++;
        }
        else
        {
            output[k]=input[j];
            j++;
            k++;
        }            
    }
   
        while(j<=ei)
        {
            output[k]=input[j];
            j++;
            k++;
        }
 
        while(i<=mid)
        {
            output[k]=input[i];
            i++;
            k++;
        }
        int m=0;
        for(int i=si;i<=ei;i++)
        {
            input[i]=output[m];
            m++;
        }
}

void mergeSort(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    mergeSort(input,si,mid);
    mergeSort(input,mid+1,ei);
    
    merge(input,si,ei,mid);
}



void mergeSort(int input[], int size){
	// Write your code here
        mergeSort(input,0,size-1);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}