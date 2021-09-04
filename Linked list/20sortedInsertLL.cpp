//insert in Sorted LL

//i/p: 10->20->30->40, x=25
//o/p: 10->20->25->30->40

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

node *sortedInsert(node *head,int x)
{
    node *temp=new node(x);
    //if head is null
    if(head==NULL)
        return temp;
    //x is less than head
    if(x < head->data)
    {
            temp->next=head;
            return temp;
    }
    node *curr=head;
    //check for smaller than x
    while(curr->next !=NULL && curr->next->data < x)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
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
//    node *head=NULL;
    node *head=new node(10);
    head->next=new node(20);
//    head->next->next=new node(30);
//    head->next->next->next=new node(40);
    printlist(head);
    head=sortedInsert(head,5);
    printlist(head);

    return 0;
}
