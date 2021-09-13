//Delete node with only pointer given to it
//O(n) O(1)

//i/p: 10 -> 20 -> 30 -> 40 ,pointer=30
//o/p: 10 -> 20 -> 40

//P.S. We cant delete last one ;)

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *deleteNodePointer(node* ptr)
{
	//10 -> 20 -> 30 -> 40 ,pointer=30
	//temp=40
	node *temp=ptr->next;
	//assigned 30 as 40
	//10 -> 20 -> 40 -> 40
	ptr->data=temp->data;
	//here we assign 30->next to 40
	//skip copied 40
	//10 -> 20 -> 40
	ptr->next=temp->next;
	delete temp;
}

void printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
	node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=new node(40);
	//passed node deleting node
	deleteNodePointer(head->next->next);
	printlist(head);
	return 0;
}
