//Insert at begin of LL
//O(1

//i/p: 10 --> 20 --> 30, x=5
//o/p: 5 --> 10 --> 20 --> 30 (always insert at begin of LL)- print reverse


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

node *insertbegin(node *head, int data)
{
    node *temp=new node(data);
    temp->next=head;
    return temp;
}


void printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    node *head=NULL;
    head=insertbegin(head,10);
    head=insertbegin(head,20);
    head=insertbegin(head,30);
    printlist(head);
    return 0;
}

