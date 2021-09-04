/// Find n'th node from end
//Approach 2
//O(n)- 1 traversal

//i/p: 10 20 30 40 50, n=2
//o/p: 40(from last 2nd node)

#include <bits/stdc++.h>
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

node *nThLast(node *head,int n)
{
    //head is null
    if(head==NULL)
        return NULL;
    node *first=head;
    //loop till given n
    //so we keep first at given n
    for(int i=0; i<n; i++)
    {
    	//if first get null means len<n
        if(first==NULL)
            return NULL;
        first=first->next;
    }
    //keep second on head
    //and start both first from n and first from head at same time by 1
    node *second=head;
    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
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
    printlist(head);
    nThLast(head,2);

    return 0;
}



