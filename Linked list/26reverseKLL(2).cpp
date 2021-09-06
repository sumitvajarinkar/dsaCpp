
/// Reverse a LL in K group
//Approach 2
//O(n) O(1) - Iterative

//i/p: 10 -> 20 -> 30 -> 40 -> 50 -> 60, k=3
//o/p: 30 -> 20 -> 10 -> 60 -> 50 -> 40

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


node *reverseKLL(node *head, int k)
{
    node *curr=head;
    node *prevfirst=NULL;
    bool isfirstpass=true;
    while(curr!=NULL)
    {
        node *first=curr,*prev=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {

            // 10 -> 20 -> 30
            // 30 -> 20 -> 10
            node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isfirstpass)
        {

            head=prev;
            isfirstpass=false;
        }
        else
        {
            //30 -> 20 -> 10 -> 60 -> 50 -> 40
            //attach 10 -> 60
            prevfirst->next=prev;
        }
        prevfirst=first;
    }
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
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    head->next->next->next->next->next=new node(60);
    printlist(head);
    head=reverseKLL(head,3);
    printlist(head);

    return 0;
}


