//Insert at beginning of DLL

// i/p: 10 = 20 = 30, data : 5
// o/p: 5 = 10 = 20 = 30

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

node *insertBegin(node *head,int data)
{
    node *temp=new node(data);
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
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
    cout<<endl;
}

int main()
{
    node *head=NULL;
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);
    head=insertBegin(head,5);
    printlist(head);
}

