//#include<"NodeClass.h"
template<typename T>
class queueUsingLL{
    Node<T> *head;
    Node<T> *tail;
    int size;

    public:
    queueUsingLL()
    {
        head=nullptr;
        tail=nullptr;
        size=0;
    }

    //check the size of queue
    int getSize()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
        }
        return size;
    }

    //check queue is empty or not
    bool isEmpty()
    {
        return size==0;
    }

    //print 1st value of queue 
    T front()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
            return 0;
        }

        return head->data;
    }

    void enqueue(T element)
    {
        Node<T>* newnode=new Node<T>(element);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        size++;

    }

    T dequeue()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
            return 0;
        }
        size--;
        Node<T>* temp=head;
        head=temp->next;
        T ans=temp->data;
        delete temp;
        return ans;
    }
};