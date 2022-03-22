//Tree traversal
// O(n) O(h)

/*

				10
			 /	  \
		   20	  30
		/   \    /  \
	  40    50	60   70

	  Node : root
	  left subtree
	  right subtree

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

void printPostorder(struct Node* node) // L R N
{
    if(node == NULL)
        return;
    printPostorder(node->left);

    printPostorder(node->right);

    cout<<node->data<<" ";

}

void printInorder(struct Node* node) // L N R
{
    if(node == NULL)
        return;
    printInorder(node->left);

    cout<<node->data<<" ";

    printInorder(node->right);
}

void printPreorder(struct Node* node) // N L R
{
    if(node == NULL)
        return;
    cout<<node->data<<" ";


    printPreorder(node->left);

    printPreorder(node->right);
}
int main()
{
    /* Tree is
    			10
    		 /	  \
    		20	  30
    	  /   \
     	40	  50

    	 	/	\
    	  60	70
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right =new Node(50);
    root->left->right->left =new Node(60);
    root->left->right->right =new Node(70);
    */



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




    cout<<"Preorder :\n";
    printPreorder(root); // N L R
    cout<<"\nInorder :\n";
    printInorder(root);  // L N R
    cout<<"\nPostorder :\n";
    printPostorder(root); // L R N
    return 0;
}
