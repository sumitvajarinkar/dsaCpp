///Delete from end of circular LL
//Approach 1
//O(n)

//i/p: 10 -> 20 -> 30 -> 40
//o/p:  20 -> 30 -> 40
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
    node *curr=head;
    //till end
    while(curr->next!=head)
        curr=curr->next;
    //assign last node to head next and deallocate head
    curr->next=head->next;
    delete head;
    return curr->next;
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
    head=deleteHead(head);
    printlist(head);
}

