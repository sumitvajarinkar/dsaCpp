
///Delete head in DLL
//O(1)

// i/p: 10 = 20 = 30
// o/p: 20 = 30

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

node *deleteHead(node *head)
{
    //if head is null
    if(head==NULL)
		return NULL;

	//if head->next is null delete head
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	else{
			//swapping
		node *temp=head;
		head=head->next;
		head->prev=NULL;

		delete temp;
		return head;
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
//     node *head=NULL;
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);
    head=deleteHead(head);
    printlist(head);
}


