#include <iostream>
#include <cstdlibs>

using namespace std;


struct node
{
int data;
node* next;
}


void push(node** head_ref, int data)
{
node* new_node = (struct node *)malloc(sizeof(struct node));

new_node->data = data;
new_node->next = *head_ref;

*head_ref = new_data;


}


void print(node* n)
{
while(n != Null)
{
cout << n->data;
n=n->next;
}
}

int main()
{
    node *head = NULL:

    push(&head, 2);

    print(head);
    return 0;
}
