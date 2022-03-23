///Children Sum Property
//O(n) o(h)

/*
			   20
			 /	  \
			18	  2
		  /   \
	 	11	  7

		 	/	\
			4	3
o/p:  Yes

18 + 2 = 20
11 + 7 = 18
4 + 3 =7
*/


#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};

bool childernsum(Node *root)
{
	if(root == NULL)
		return true;

	//Corner case
	if(root->left == NULL && root->right == NULL)
		return true;

	int sum = 0;

	if(root->left !=NULL)
		sum += root->left->data;
	if(root->right != NULL)
		sum += root->right->data;
	return(root->data == sum &&
			childernsum(root->left)&&
			childernsum(root->right));
}

int main()
{
	int s;
	/*Tree is
			   30
			 /	  \
		   20	  10
		/   \    /  \
	  11    9	7   3
	*/

struct Node *root = new Node(30);
	root->left = new Node(20);
	root->right = new Node(10);
	root->left->left = new Node(11);
	root->left->right =new Node(9);
	root->right->left=new Node(7);
	root->right->right=new Node(3);


	/* Tree is
				20
			 /	  \
			18	  2
		  /   \
	 	11	  7

		 	/	\
			4	3


	struct Node *root = new Node(20);
	root->left = new Node(18);
	root->right = new Node(2);
	root->left->left = new Node(11);
	root->left->right =new Node(7);
	root->left->right->left =new Node(4);
	root->left->right->right =new Node(3);
	*/

	s=childernsum(root);
	if(s==1)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}
