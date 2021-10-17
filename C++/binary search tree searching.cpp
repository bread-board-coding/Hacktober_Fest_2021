#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node* left,*right;
    Node(int x)
    {
        key=x;
        left=right=nullptr;
    }
};

Node* insert(Node* root,int x) 
{
    if(root==NULL) 
    {
        root=new Node(x);
        return root;
    }
    if(root->key < x)  
        root->right=insert(root->right,x);
    else if(root->key > x)
        root->left=insert(root->left,x);
    return root;
}

void search(Node* root,int val)
{
   
    while(root)
    {
        if(root->key==val) 
        {
            cout<<val<<" is found in BST!\n";
            return;
        }
        if(root->key < val) root=root->right;
        else root=root->left;
    }
    cout<<val<<" is not found in BST!\n";
}

void main() {
	Node *root=NULL;
	root=insert(root,51);
	root=insert(root,10);
	root=insert(root,712);
	root=insert(root,1);
	root=insert(root,3);
	root=insert(root,92);
	root=insert(root,9);
	root=insert(root,91);
	root=insert(root,93);
	root=insert(root,19);
	root=insert(root,439);
 
    search(root,0);
    search(root,93);
    search(root,10);
}
