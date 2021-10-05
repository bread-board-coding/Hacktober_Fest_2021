#include<iostream>
#include<queue>
using namespace std;
#include"BinaryTreeNode.h"

BinaryTreeNode<int>* takeinput()
{
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1)
    return NULL;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild=takeinput();
    BinaryTreeNode<int>* rightChild=takeinput();
    root->left=leftChild;
    root->right=rightChild;
    return root;
}

//takeinputLevelWise
BinaryTreeNode<int>* takeinputLevelWise()
{
    int data;
    cout<<"Enter root data"<<endl;
    cin>>data;
    if(data==-1)
    return NULL;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(data);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty())
    {
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        int leftData;
        cout<<"Enter left child of "<<front->data<<endl;
        cin>>leftData;
        if(leftData!=-1)
        {
            BinaryTreeNode<int>* leftChild=new BinaryTreeNode<int>(leftData);
            pendingNodes.push(leftChild);
            front->left=leftChild;
        }
        int rightData;
        cout<<"Enter right child of "<<front->data<<endl;
        cin>>rightData;
        if(rightData!=-1)
        {
            BinaryTreeNode<int>* rightChild=new BinaryTreeNode<int>(rightData);
            pendingNodes.push(rightChild);
            front->right=rightChild;
        }
    }

    return root;

}

//print levelWise
void printLevelWise(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    return ;
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        {
            cout<<"L"<<front->left->data;
            pendingNodes.push(front->left);
        }
        if(front->right!=NULL)
        {
            cout<<" R"<<front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
}
void print(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<":";
    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL)
    {
        cout<<" R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
 
 int count(BinaryTreeNode<int>* root)
 {
     if(root==NULL)
     return 0;
     return 1+count(root->left)+count(root->right);
 }

 //diameter of a tree
int height(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    return 0;
    return 1+max(height(root->left),height(root->right));
}

int diameter(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    return 0;
    int option1=height(root->left)+height(root->right);
    int option2=diameter(root->left);
    int option3=diameter(root->right);
    return max(option1,max(option2,option3));
}

//8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int>* root=takeinputLevelWise();
    printLevelWise(root);
    cout<<"count:- "<<count(root)<<endl;
    cout<<"Diameter:- "<<diameter(root)<<endl;
    delete root;
    return 0;
}