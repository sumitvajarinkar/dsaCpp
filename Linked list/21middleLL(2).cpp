///Middle of LL
//slow-fast pointer
//Approach 2
//O(n)-2 traversal

//i/p: 10->20->30->40
//o/p: 30(2nd node of 2 middle node)

//i/p: 10->20->30->40->50
//o/p: 30(one middle node)


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

node *middleLL(node *head)
{
    //if head is null
    if(head==NULL)
        return NULL;
    //10 -> 20 -> 30 ->40 -> NULL
    //fs
    //       s     f
    //             s          f
    node *slow=head,*fast=head;
    //slow run for 1
    //fast run for 2
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
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
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    middleLL(head);

    return 0;
}



