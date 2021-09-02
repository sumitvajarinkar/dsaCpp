

///Insert at end of circular LL
//Approach 2
//O(1)

//i/p: 10 -> 20 -> 30, x=40
//o/p: 10 -> 20 -> 30 -> 40
//      |________________|


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

node *insertEnd(node *head,int x)
{
    node *temp=new node(x);
//if null
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        //10->40->20->30
        //then swap betn 10 & 40
        // head at 10.

        //insert temp after head
        temp->next=head->next;
        head->next=temp;

        //swapping
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }
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
    head=insertEnd(head,40);
    printlist(head);
}
