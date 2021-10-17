// CPP program to Delete a Tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node
{
	public:
	int data;
	node* left;
	node* right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
	node* Node = new node();

	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;
	return(Node);
}

/* This function is same as deleteTree()
in the previous program */
void _deleteTree(node* node)
{
	if (node == NULL) return;

	/* first delete both subtrees */
	_deleteTree(node->left);
	_deleteTree(node->right);

	/* then delete the node */
	cout << "Deleting node: " << node->data << endl;
	delete node;
}

/* Deletes a tree and sets the root as NULL */
void deleteTree(node** node_ref)
{
	_deleteTree(*node_ref);
	*node_ref = NULL;
}

/* Driver code*/
int main()
{
	node *root = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// Note that we pass the address of root here
	deleteTree(&root);
	cout << "Tree deleted ";
	return 0;
}

// This code is contributed by rathbhupendra
