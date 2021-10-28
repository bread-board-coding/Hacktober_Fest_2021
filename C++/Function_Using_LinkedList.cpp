#include<iostream>
using namespace std;
class SlinkedList;
int  CompareNumbers(SlinkedList & list1, SlinkedList & list2); 
class SlinkedList
{
private:
struct Node {
int data;
Node* next;
public:
	Node()
	{
		data=0;
		next=nullptr;
	}
	void setdata(int n)
	{
		data=n;
	}
	void setnext(Node* n)
	{
		next=n;
	}
	int getdata()
	{
		return data;
	}
	Node * getnext()
	{
		return next;
	}
};
int size;
public:
	Node * head;
SlinkedList()
{
	head=nullptr;
	size=0;
}
void insertAtEnd(int n)
{
	Node * tra=head;
	if(this->head==nullptr)
	{
		tra=new Node();
		size++;
		tra->setdata(n);
		tra->setnext(nullptr);
	}
	else
	{
		while (tra!=nullptr)
		{
		    tra=tra->getnext();
		}
		tra=new Node();
		size++;
		tra->setdata(n);
	}
}
void insertAtStart(int n,Node * _head)
{
	Node * tar=new Node();
	tar->setdata(n);
	tar->setnext(_head);
	_head=tar;
}
SlinkedList(SlinkedList & list)
{
	Node * tra=list.head;
	SlinkedList obj;
	Node *ret=obj.head;
	while(tra!=nullptr)
	{
		ret=new Node();
		obj.size++;
		ret->setdata(tra->getdata());
		ret=ret->getnext();
	}
}
void InsertToList (int a)
{
	Node * tra=head;
	int c=1;
	while (a>9)
	{
		int n=0;
		n=a%10;
		a=a/10;
		Node * newnode=new Node();
		newnode->setdata(n);
		if(c==1)
		{
			head=newnode;
			tra=head;
			c++;
		}
		else
		{
			tra->setnext(newnode);
		}
		tra->setnext(newnode);
		size++;
	}
	if(a<=9)
	{
		size++;
		Node * newnode=new Node();
		newnode->setdata(a);
		if(c==1)
		{
			head=newnode;
			tra=head;
			c++;
		}
		else
		{
			tra->setnext(newnode);
		}
	}
	
}
Node * gethead()
{
	return head;
}
SlinkedList operator +(const SlinkedList & List2)
{
	SlinkedList ret;
	int count=0;
	Node *t1=this->head;
	Node *t2=List2.head;
	while (t1!=nullptr)
	{
		count++;
		t1=t1->getnext();
	}
	int s=0,carry=0;
	while (count!=0)
	{
		t1=this->head;
		t2=List2.head;
		for(int i=0;i<count;i++)
		{
			t1=t1->getnext();
			t2=t2->getnext();
		}
		s=t1->getdata()+t2->getdata()+carry;
		if(s>9)
		{
			s=s%10;
		    carry=s/10;
		}
		ret.insertAtEnd(s);
		count--;
	}
	if(carry!=0)
	{
		ret.insertAtEnd(carry);
	}
	return ret;
}
void removedKthLastElement (int K)
{
	Node * pre=head;
	Node *t=head;
	int count=1;
	while (count+1!=K)
	{
		pre=t;
		t=t->getnext();
	}
	pre->setnext(t->getnext());
	t->setnext(nullptr);
}
int helpPrint(Node * p)
{
	if(p==nullptr)
		return 0;

	int n=helpPrint(p->getnext());

	cout<<n;
	return p->getdata();
}
void  PrintNumber()
{
	Node * t=head;
	//helpPrint(t);
	while (t!=nullptr)
	{
		cout<<t->getdata();
		t=t->getnext();
	}
	cout<<'\n';
}
~SlinkedList()
{
	if(head!=nullptr)
	{
		delete head;
	}
}
};
//int Compare(SlinkedList & list1,SlinkedList & list2)
//{
//	struct Node * t1=list1.head;
//	struct Node * t2=list2.head;
//	while(t1!=nullptr || t21=nullptr)
//	{
//		if(t1->getdata()>t2->getdata())
//			return 1;
//		else if(t1->getdata()<t2->getdata())
//			return 2;
//	}
//	return 0;
//}

int main() {
int a=342,b=465,c=54321,d=129;
SlinkedList list1,list2,list3,list4;
list1.InsertToList(a);
list2.InsertToList(b);
list1.PrintNumber();   //Sample answer 342
list2.PrintNumber();   //Sample answer 465
SlinkedList list5=list1 + list2;
list5.PrintNumber();    //Sample answer 807
list3.InsertToList(c);
list4.InsertToList(d);
list3.PrintNumber();   //Sample answer 54321
list4.PrintNumber();   //Sample answer 129
SlinkedList list6=list3 + list4;
list6.PrintNumber();  //Sample answer 54450
list6.removedKthLastElement(2); 
list6.PrintNumber();  //Sample answer 5450
list5.removedKthLastElement(3); 
list5.PrintNumber();   //Sample answer 80
//cout<<"campare List result"<<CompareNumbers(list1,list2); //sample answer 2
//cout<<"campare List result"<<CompareNumbers(list2,list1); //sample answer 1
//cout<<"campare List result"<<CompareNumbers(list3,list3); //sample answer 0
//cout<<"campare List result"<<CompareNumbers(list3,list4); //sample answer 1
system("pause");
}
