template<typename T>
class queueUsingArray{
    T *data;
    int nextIndex;
    int frontIndex;
    int size;
    int totalSize;

    public:
    queueUsingArray(int totalSize)
    {
        data=new T[totalSize];
        nextIndex=0;
        frontIndex=-1;
        size=0;
        this->totalSize=totalSize;
    }

     //element insert in a queue
     void enqueue(T element)
     {
           if(size==totalSize)
           {
               cout<<"Queue is Full"<<endl;
               return ;
           }

           data[nextIndex]=element;
           nextIndex=(nextIndex+1)%totalSize;
           size++;
           if(frontIndex==-1)
           {
                frontIndex=0;
           }

     }

     //element delete in a queue
     T dequeue()
     {
            if(size==0)
            {
                cout<<"Queue is Empty"<<endl;
                return 0;
            }
        int ans=data[frontIndex];
        size--;
        frontIndex=(frontIndex+1)%totalSize;
        return ans;
     }

     //to get the front element in a queue
     T front()
     {
          if(size==0)
          {
              cout<<"Queue is Empty"<<endl;
              return 0;
          }

          return data[frontIndex];
     }

     //to get the size of the queue
     int getsize()
     {
          return size;
     }

     //to the queue is empty or not
     bool isEmpty()
     {
          if(size==0)
          return true;
          else
          return false;
     }

};