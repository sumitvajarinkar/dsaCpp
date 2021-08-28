//Insert at end of LL
//O(n)

//i/p: 10 --> 20 --> 30, x=5
//o/p: 10 --> 20 --> 30 --> 5 (always insert at end of LL)- print as it is

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *next;
    node(int x)
    {
        key=x;
        next=NULL;
    }
};


node *insertEnd(node *head, int key)
{
    if(head == NULL)
        return new node(key);
    node *curr=head;
    while(curr->next != NULL)
        curr=curr->next;
    curr->next = new node(key);
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
}
int main()
{
    node *head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);
    printlist(head);
    return 0;
}

