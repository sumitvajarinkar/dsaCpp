///Pairwise swap nodes of LL
//Approach 1
//O(n) O(1) - with swapping

//i/p:1->2->3->4->5->6
//o/p:2->1->4->3->6->5

//i/p:1->2->3->4->5
//o/p:2->1->4->3->5

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void *pairWiseSwap(node* head)
{
	//by swaping
	node *curr=head;
	while(curr!=NULL && curr->next!=NULL){
		swap(curr->data,curr->next->data);
		curr=curr->next->next;
	}
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
	node *head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	head->next->next->next->next->next=new node(6);
	printlist(head);
	pairWiseSwap(head);
	printlist(head);
	return 0;
}
