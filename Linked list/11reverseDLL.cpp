
//Insert at end of DLL

// i/p: 10 = 20 = 30
// o/p: 30 = 20 = 10

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        data=d;
        prev=next=NULL;
    }
};

node *reverseDLL(node *head)
{
	//if head is null or head -> next is null then its reverse is same as head
	if(head==NULL || head->next == NULL)
		return head;

	node *prev=NULL;
	node *curr=head;
	// we are just swapping between = not exact elements
	while(curr!=NULL){
			//Swapping
		prev=curr->prev;
		curr->prev=curr->next;
		curr->next=prev;

		curr=curr->prev;
	}
return prev->prev;
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
//     node *head=NULL;
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);
    head=reverseDLL(head);
    printlist(head);
}


