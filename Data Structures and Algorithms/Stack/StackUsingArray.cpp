#include<climits>
class stackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
    stackUsingArray(int totalSize)
    {
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }

    //check stack is empty or not
    bool isEmpty()
    {
        if(nextIndex==0)
        return true;
        else
        return false;
    }

    //check the current size of stack
    int size()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }

        return nextIndex;
    }

    //insert element in sytack
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            cout<<"Stack is FULL"<<endl;
            return ;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    //access top most element in a stack
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }

        return data[nextIndex-1];
    }

    //deleting the topmost element in stack
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        int ans=data[nextIndex-1];
        nextIndex--;
        return ans;
    }
};