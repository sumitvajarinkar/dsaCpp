//Print nodes K distance
// O(n) O(h)

/*
			   10	---> 0
    		 /	  \
    	   20	  30	---> 1
    	/   \    /  \
      40    50	60   70   ---> 2

i/p: k=2
o/p: 40 50 60 70

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

void kdistance(Node *root, int k)
{
    if(root == NULL)
        return;
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    else
    {
        kdistance(root->left,k-1);
        kdistance(root->right,k-1);
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

    int k;
    cout<<"Enter distance\n";
    cin>>k;
    kdistance(root,k);
    return 0;
}
