#include<iostream>
#include"TreeNode.h"
#include<queue>
using namespace std;

//takeinput levelwise
TreeNode<int>* takeinputlevelwise()
{
    int data;
    cout<<"Enter root data"<<endl;
    cin>>data;
    TreeNode<int> *root=new TreeNode<int>(data);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the no of child of "<<front->data<<" node"<<endl;
        int num;
        cin>>num;
        for(int i=0;i<num;i++)
        {
            int data;
            cout<<"Enter data"<<endl;
            cin>>data;
            TreeNode<int> *child=new TreeNode<int>(data);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

//takeinput
TreeNode<int>* takeinput()
{
    int data;
    cout<<"Enter data ";
    cin>>data;
    TreeNode<int> *root=new TreeNode<int>(data);
    int n;
    cout<<"Enter no of children of "<<data<<" ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child=takeinput();
        root->children.push_back(child);
    }

    return root;
}

//rpint levelWise
void printLevelWise(TreeNode<int> *root)
{
     queue<TreeNode<int> *> pendingNodes;
     pendingNodes.push(root);
     while(pendingNodes.size()!=0)
     {
          TreeNode<int>* front=pendingNodes.front();
          pendingNodes.pop();
          cout<<front->data<<":";
          for(int i=0;i<front->children.size();i++)
          {
              cout<<front->children[i]->data<<",";
              pendingNodes.push(front->children[i]);
          }
          cout<<endl;
     }

}
//Print inorder postorder and preorder iterative approach 
void print()
//print function
void printTree(TreeNode<int> *root)
{
    //edge case (No need to use)
    if(root==NULL)
    return ;
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int>* root=takeinputlevelwise();
    printLevelWise(root);
    return 0;

}