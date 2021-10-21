#include<iostream>

using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void inplaceHeapSort(int input[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */
    int CI,PI;
    for(int i=1;i<n;i++)
    {
        CI=i;
        while(CI!=0)
        {
            PI=(CI-1)/2;
            if(input[CI]<input[PI])
            {
                swap(input[CI],input[PI]);
                CI=PI;
            }
            else
                break;
        }
    }

    //Remove IDEALLY
      int size=n-1;
    while(size>=0)
    {
    swap(input[0],input[size]);
    size--;
    int PI=0;
    int leftChild=1;
    int rightChild=2;
    while(leftChild<=size)
    {
        int minIndex=PI;
        if(input[minIndex]>input[leftChild])
            minIndex=leftChild;
        if(rightChild<=size && input[minIndex]>input[rightChild])
            minIndex=rightChild;
        if(minIndex==PI)
            break;
        swap(input[minIndex],input[PI]);
        PI=minIndex;
        leftChild=2*PI+1;
        rightChild=2*PI+2;
    }
    } 
}


int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    inplaceHeapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}