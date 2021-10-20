///Height of Binary Tree
/*
i/p :
			   10  --------1
    		 /	  \
    	   40	  30 ------2
		 /   \    	\
       50    70		 60 ---3
      	   /  \
      	  3    2 ----------4

o/p : 4


To return the function height we add +1 for root element
*/

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
    node (int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

int height(node *root)
{
    if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	return 1 + max(rh,lh);
}

int main()
{
    /*Tree is
    			10
    		 /	  \
    	   40	  30
    	/   \    	\
      50    70		 60
      	   /  \
      	  3    2


    struct node *root = new node(10);
    root->left = new node(40);
    root->right = new node(30);
    root->left->left = new node(50);
    root->left->right =new node(70);
    root->right->left=new node(60);
    root->left->right->left=new node(3);
    root->left->right->right=new node(2);
    */

    /* Tree is
    			20
    		 /	  \
    		18	  2
    	  /   \
     	11	  7

    	 	/	\
    		4	3
    */
    struct node *root = new node(20);
    root->left = new node(18);
    root->right = new node(2);
    root->left->left = new node(11);
    root->left->right =new node(7);
    root->left->right->left =new node(4);
    root->left->right->right =new node(3);

    cout<<"Height of tree :"<<height(root);
    return 0;
}
