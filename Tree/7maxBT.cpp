///Size of Binary tree
//O(n) O(h)


/*

			   10
			 /	  \
		   20	  30
		/   \    /  \
	  40    50	60   70

o/p: 70 (max node)
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

getMax(Node *root)
{
	if(root ==NULL)
		return INT_MIN;
	else
	return max(root->data, max(getMax(root->left),getMax(root->right)));
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

	cout<<"Maximum in Binary tree "<<getMax(root);
	return 0;
}
