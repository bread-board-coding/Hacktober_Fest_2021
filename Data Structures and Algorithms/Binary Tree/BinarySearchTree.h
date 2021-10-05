#include"BinaryTreeNode.h"
#include<climits>
using namespace std;
template<typename T>
class BST{
   BinaryTreeNode<int>* root;
   public:
   //constructor
   BST()
   {
       root=NULL;
   }
   //Destructor
   ~ BST()
   {
       delete root;
   }

   //data present in tree or not 
   private:
   bool hasData(BinaryTreeNode<int>* root,T data)
   {
       if(root==NULL)
       return false;
       if(root->data==data)
       return true;
       if(data<root->data)
       return hasData(root->left,data);
       else
       return hasData(root->right,data);
   }

   BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root,T data)
   {
        if(root==NULL)
       {
           BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
           return newNode;
       }
       else if(root->data>data)
       {
           BinaryTreeNode<int>* leftNode=insert(root->left,data);
           root->left=leftNode;
           return root;
       }
       else
       {
           BinaryTreeNode<int>* rightNode=insert(root->right,data);
           root->right=rightNode;
           return root;
       }
   }
   void print(BinaryTreeNode<int>* root)
    {
        if(root==NULL)
        {
            cout<<endl;
            return;
        }
        print(root->right);
        cout<<root->data<<" ";
        print(root->left);
    }

    //deletion
    T minimum(BinaryTreeNode<int>* root)
    {
        if(root==NULL)
        return INT_MAX;
        return min(root->data,min(minimum(root->left),minimum(root->right)));
    }
    BinaryTreeNode<int>* remove(BinaryTreeNode<int>* root,int data)
    {
        if(root==NULL)
        return NULL;
        if(root->data>data)
        {
            BinaryTreeNode<int>* leftSide=remove(root->left,data);
            root->left=leftSide;
            return root;
        }
        else if(root->data<data)
        {
            BinaryTreeNode<int>* rightSide=remove(root->right,data);
            root->right=rightSide;
            return root;
        }
        else
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            else if(root->left!=NULL && root->right==NULL)
            {
                BinaryTreeNode<int>* ans=root->left;
                root->left=NULL;
                delete root;
                return ans;
            }
            else if(root->left==NULL && root->right!=NULL)
            {
                BinaryTreeNode<int>* ans=root->right;
                root->right=NULL;
                delete root;
                return ans;
            }
            //Important case
            else
            {
                //1st method find left side maximum
                //2nd method find right side minimum
                //replace them with root and remove  data from that side and simply return and connect 

                //right side min;
                T rightMin=minimum(root->right);
                root->data=rightMin;
                BinaryTreeNode<int>* rightSide=remove (root->left,rightMin);
                root->right=rightSide;
                return root;
            }
        }
    }
  public:
   bool hasData(T data)
   {
       return hasData(root,data);
   }
    void print()
    {
        print(root);
    }
   void insert(T data)
   {
       BinaryTreeNode<int>* newNode=insert(root,data);
       root=newNode;
   }

  void remove(T data)
   {
       root=remove(root,data);
   }

};