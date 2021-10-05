#include<iostream>
using namespace std;
#include"NodeClass.h"
#include"queueUsingLL.h"

int main()
{
    queueUsingLL<int> q;
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);
     q.enqueue(50);
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     q.enqueue(50);
     cout<<q.dequeue()<<endl;
     q.enqueue(40);
     q.enqueue(30);
     cout<<q.front()<<endl;
     cout<<q.getSize()<<endl;
     cout<<q.isEmpty()<<endl;


     return 0;

}