///Pairwise swap nodes of LL
//Approach 2
//O(n) O(1) - without swapping - pointer modification

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

node *pairWiseSwap(node* head)
{
	//if null
	if(head==NULL||head->next==NULL)
        return head;

	//For modified head 2 nodes
	//5->10->15
	//10->5->15
    node *curr=head->next->next;
    node *prev=head;
    head=head->next;
    head->next=prev;

    //for remaining nodes
    // 1->2->3->4
    while(curr!=NULL && curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
    //moving 2 nodes ahead at a time
        node *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    //for last element
    prev->next=curr;
    return head;
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
//	head->next->next->next->next->next=new node(6);
	printlist(head);
	head=pairWiseSwap(head);
	printlist(head);
	return 0;
}
