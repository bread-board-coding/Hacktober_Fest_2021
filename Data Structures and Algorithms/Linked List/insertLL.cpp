class node
{
    public:
    	int data;
    	node *next;
    	node(int data)
    	{
    		this->data=data;
    		this->next=nullptr;
    	}
};

#include<iostream>
using namespace std;
//insert a node in sorted LL
node *insert(node *head,int data)
{
    node *newnode=new node(data);
    if(head==NULL)
    {
    	head=newnode;
    	return head;
    }
    node *temp=head;
    int flag=0;
    while(flag==0)
    {
    	if(temp->data<=data)
    	{
    		if(temp->next!=NULL)
    		{
    			if(temp->next->data>=data)
    			{
    				flag=1;
    			}
    			else
    			{
    				temp=temp->next;
    			}
    		}
    		else
    		{
                 flag=1;
    		}
    	}
    	else
    	{
    		temp=temp->next;
    	}
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
//insert front
node* insertfront(node *head,int data)
{
	node *newnode=new node(data);
    newnode->next=head;
    head=newnode;
    return head;
}
//insert at last position
node *insertLast(node *head,int data)
{
	node *newnode=new node(data);
	node *temp=head;
    while(temp->next!=nullptr)
    {
    	temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

//take input from users 
node *takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1)
    {
    	node *newnode=new node(data);
    	if(head==NULL)
    	{
    		head=newnode;
    		tail=newnode;
    	}
    	else
    	{
    		tail->next=newnode;
    		tail=newnode;
    	}
    	cin>>data;
    }
    return head;
}

//dispaly the values
void print(node *head)
{
	if(head==NULL)
	{
		cout<<"LL is empty";
		return  ;
	}
   
   node *temp=head;
   while(temp!=nullptr)
   {
   	  cout<<temp->data<<" ";
   	  temp=temp->next;
   }
}

int main()
{
	node *head=takeinput();
	cout<<"Before Insertion\n";
	print(head);
	int data;
	cout<<"\nEnter data you wants to insert:- ";
	cin>>data;
	int x;
	cout<<"Enter choice\n '1' insert at last\n '2' insert at front\n '3' insert at sorted\n";
	cin>>x;
	node *newhead;
	switch(x)
	{
	case 1:
	newhead=insertLast(head,data);
	break;
	case 2:
	newhead=insertfront(head,data);
	break;
	case 3:
	newhead=insert(head,data);
	break;
}
	cout<<"After insertion\n";
	print(newhead);
	return 0;

}