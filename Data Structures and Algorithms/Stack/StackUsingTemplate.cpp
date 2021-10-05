template<typename T>
class stack{
    T *data;
    int capacity;
    int nextIndex;

    public:

    //default constructor
    stack()
    {
         data=new T[4];
         nextIndex=0;
         capacity=4;
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
            return 0;
        }

        return nextIndex;
    }

    //insert element in sytack
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            T *newdata=new T[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            delete []data;
            data=newdata;
            capacity=2*capacity;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    //access top most element in a stack
    T top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }

        return data[nextIndex-1];
    }

    //deleting the topmost element in stack
    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        T ans=data[nextIndex-1];
        nextIndex--;
        return ans;
    }
 

};