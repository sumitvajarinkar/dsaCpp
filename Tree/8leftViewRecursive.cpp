///Print left of Binary tree - RECURSIVE
//O(n) O(h)

/*
			   10
			 /	  \
			20	  30
		  /   \
	 	40	  50

		 	/	\
		  60	70

Preorder - NLR

o/p:10 20 40 60
*/


#include<iostream>
#include<queue>
using namespace std;

int maxlevel=0;

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


void printleftview(Node *root, int level)
{
    if(root == NULL)
        return;
    if(maxlevel < level)
    {
        cout<<root->data<<" ";
        maxlevel = level;
    }
    printleftview(root->left,level+1);
    printleftview(root->right,level+1);
}



int main()
{
    /*Tree is
    			10
    		 /	  \
    	   20	  30
    	/   \    /  \
      40    50	60   70


    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right =new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    */

    /* Tree is
    			10
    		 /	  \
    		20	  30
    	  /   \
     	40	  50

    	 	/	\
    	  60	70
    */

    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right =new Node(50);
    root->left->right->left =new Node(60);
    root->left->right->right =new Node(70);


    printleftview(root,1);
    return 0;
}
