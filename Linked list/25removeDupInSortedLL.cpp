///Remove duplicates from sorted LL
//O(n)

//i/p: 10 -> 20 ->20 ->30 ->30 ->30
//o/p: 10 -> 20 ->30

#include<bits/stdc++.h>
using namespace std;
s
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

void removeDupInSortedLL(node *head){
node *curr=head;
while(curr!=NULL && curr->next!=NULL){
	if(curr->data == curr->next->data)
	{
		node *temp=curr->next;
		curr->next=curr->next->next;
		delete(temp);
	}
	else
		curr=curr->next;
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
//    node *head=NULL;
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(20);
    head->next->next->next=new node(30);
    head->next->next->next->next=new node(30);
    head->next->next->next->next->next=new node(30);
    printlist(head);
    removeDupInSortedLL(head);
    printlist(head);

    return 0;
}
