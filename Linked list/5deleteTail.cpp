// Delete last node of LL
//O(n)

//i/p: 10 --> 20 --> 30
//o/p: 10 --> 20 --> null (need to check curr->next->next = NULL)

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node *deleteTail(node *head){

if(head==NULL)
	return NULL;
if(head->next==NULL){
	delete head;
	return NULL;
}
node *curr=head;
while(curr->next->next!=NULL)
	curr=curr->next;
delete curr->next;
curr->next=NULL;
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
	node *head=NULL;
	node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    head=deleteTail(head);
    printlist(head);

    return 0;
}


