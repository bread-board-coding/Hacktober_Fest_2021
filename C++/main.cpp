#include <iostream>
#include<cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;


void createList(int n)
    {
        struct node* temp;
        int data,i;

       head = (struct node *)malloc(sizeof(struct node));

        if(head == NULL)
        {
            cout<<"Unable to locate memory"<<endl;

        }
else{
        cout<<"Enter the data of node 1 :"<<endl;
        cin >> data;

        head->data = data;
        head->next = NULL;
temp = head;

            for(i=2;i<=n;i++)
            {
                node* newNode = (struct node *)malloc(sizeof(struct node));
                if(newNode == NULL)
                {
                    cout <<"Unable to locate memory"<<endl;

                }
                else{
                cout<<"Enter the data of node :"<<i<<endl;
                cin >> data;

                newNode ->data = data;
                newNode ->next = NULL;

                    temp ->next = newNode;
                    temp = temp ->next;
            }
            }
    }}

    void traverseList( node* n)
    {
        struct node* temp;


        if(head == NULL)
        {
            cout <<"Empty list"<<endl;

        }
        else
        {


        temp = head;
        while(temp != NULL)
        {
            cout << temp ->data << " ";
            temp = temp ->next;
        }
    }}



int main()
{


    int n;

    cout << "Enter total no. of node" << endl;
    cin >> n;

  createList(n);

    cout << "Data in list"<<endl;
    traverseList(head);

    return 0;
}
