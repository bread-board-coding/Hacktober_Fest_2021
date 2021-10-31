#include <iostream>
using namespace std;

const int a=50;
class checkout
{
    int code[a];
	float price[a];
	int count;
	
	public:
	
	void CNT ()	{count=0;}
	void getitem ();
	void sumtotal();
	void display();
	void deleteitem ();
	void exit();
};

void checkout::getitem()
{
	cout<<"ENTER ITEM CODE:";
	cin>>code[count];
	cout<<"ENTER ITEM PRICE:";
	cin>>price[count];
	
	count++;
}

void checkout::display()
{
	cout<<"\nTotal:\n";

	for(int i=0;i<count;i++){

	cout<<"\ncode:"<<code[i];
	cout<<"\nprice:"<<price[i];

	}
}

void checkout::sumtotal()
{
	int sum=0;
	cout<<"\nSumTotal:\n";

	for( int i=0;i<count;i++){

	sum=sum+price[i];
    
	}
	cout<<"\ntotal:"<<sum<<"\n";
}

void checkout::deleteitem ()
{
	int b;
	cout<<"\nEnter Code:\n";
	cin>>b;

	for( int i=0;i<count;i++){

	if (code[i]==b)
	{
		price[i]=0;
	}
	
                              }
} 

void checkout::exit()
{
	cout<<"\nHAVE A NICE DAY!";

	
}

int main()
{
	int x;
    checkout order;
	order.CNT();

	do
	{
		cout<<"\nSelect An Operation:\n1:Add an item.\n2:Delete an item.\n3:Display total value.\n4:Display all items.\n5:Exit.";
	    cout<<"\nWhich one do you want to select?";

		cin>>x;

		switch (x)
		{
		case 1 : order.getitem();
		break;
		case 2 : order.deleteitem();
		break;
		case 3 : order.sumtotal();
		break;
		case 4 : order.display();
		break;
		case 5 : order.exit();
	    break;
		default:cout<<"error";
			break;
		}
	} while (x!=5);
	
    
	return 0;}
