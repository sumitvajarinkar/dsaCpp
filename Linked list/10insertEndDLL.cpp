//Insert at end of DLL

// i/p: 10 = 20 = 30, data : 40
// o/p: 10 = 20 = 30 = 40

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

node *insertEnd(node *head,int data)
{
    node *temp=new node(data);
    //head is null
    if(head==NULL)
		return temp;
	node *curr=head;
	//Run till null
	while(curr->next!=NULL)
		curr=curr->next;
	//add a new node from curr
	curr->next=temp;
	temp->prev=curr;
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
//     node *head=NULL;
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);
    head=insertEnd(head,40);
    printlist(head);
}


