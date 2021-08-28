// Delete first node of LL
//O(1)

//i/p: 10 --> 20 --> 30
//o/p: 20 --> 30 (need to move head on 2nd node always)

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

node *deleteHead(node *head){

if(head==NULL)
	return NULL;
else{
	node *temp=head->next;
	delete head;
	return temp;
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
	node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    head=deleteHead(head);
    printlist(head);

    return 0;
}


