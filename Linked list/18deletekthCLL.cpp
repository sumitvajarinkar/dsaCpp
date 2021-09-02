//Delete Kth node Circular LL

//i/p: 10 -> 20 -> 30 -> 40, k=2
//o/p:  10 -> 30 -> 40
//      |___________|

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};


node *deleteHead(node *head)
{
//if null
    if(head==NULL)
    {
        return NULL;
    }
    //1 node
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    //10 20 30 40
    //20 20 30 40
    //delete 2nd 20
    //and connect 1st 20 to 30 next->next.

    //copied
    head->data=head->next->data;
    //temp store copied one
    node *temp=head->next;
    //1st copy connect to deleted->next
    head->next=head->next->next;
    //2nd copy delete
    delete temp;
    return head;
}

node *deleteKth(node *head,int k)
{
//if null
    if(head==NULL)
    {
        return head;
    }
    //1 node
    if(k==1)
    {
        return deleteHead(head);
    }
    node *curr=head;
    //K-2
    for(int i=0;i<k-2;i++)
		curr=curr->next;
	node *temp=curr->next;
	curr->next=curr->next->next;
	delete temp;
	return head;
}

void printlist(node *head)
{
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    for(node *p=head->next; p!=head; p=p->next)
        cout<<p->data<<" ";
    cout<<endl;
}

int main()
{
//	node *head=NULL;
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
//Circular LL - last connect to head
    head->next->next->next=head;
    printlist(head);
    head=deleteKth(head,2);
    printlist(head);
}


