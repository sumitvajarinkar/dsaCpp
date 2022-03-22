//BFS
//O(n) O(width)
/*
				10
			 /	  \
		   20	  30
		/   \    /  \
	  40    50	60   70

o/p: 10 20 30 40 50 60 70

*/

#include<iostream>
#include<queue>
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

void printLevelOrder(Node *root)
{
	if(root == NULL)
	 	return;

	queue<Node *>q;
	q.push(root);

	while(q.empty() ==false)
	{
		Node *curr =q.front();
			q.pop();
		cout<<curr->data<<" ";

		if(curr->left != NULL)
			q.push(curr->left);

		if(curr->right!=NULL)
			q.push(curr->right);
	}
}

int main()
{
	/*Tree is
				10
			 /	  \
		   20	  30
		/   \    /  \
	  40    50	60   70

	*/
	struct Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right =new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);


	printLevelOrder(root);
	return 0;
}
