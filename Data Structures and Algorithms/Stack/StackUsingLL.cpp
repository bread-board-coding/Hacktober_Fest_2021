#include<iostream>
using namespace std;
template<typename T>

class node
{
    public:
    T data;
    node<T> *next;
    node(T data)
    {
        this->data=data;
        next=nullptr;
    }
};

template<typename T>

class stack
{
    node<T> *head;
    int size;

    public:
    //default constructor
    stack()
    {
        head=nullptr;
        size=0;
    }

    //check the stack is empty or not
    bool isEmpty()
    {
         if(head==nullptr)
         return true;
         else
         return false;
    }
    

    //check the size of a stack
    int size1()
    {
        if(head==nullptr)
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }

        return size;
    }

    //add element in a stack
    void push(T element)
    {
       node<T> *newNode=new node<T>(element);
       if(head==NULL)
       {
           head=newNode;
           size++;
           return ;
       }

       newNode->next=head;
       head=newNode;
       size++;
    }

    //to access topmost element in a stack
    T top()
    {
        if(head==nullptr)
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }

        return head->data;
    }

    //delete the topmost element in a stack
    T pop()
    {
         if(head==nullptr)
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        size--;
        T ans=head->data;
        node<T> *temp=head;
        head=temp->next;
        delete temp;
        return ans;
    }
};