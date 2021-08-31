// Search in LL
// Iterative - O(n) O(1)

//i/p: 10 -> 5 -> 20 -> 15 , x=20
//o/p: 3 (20 at 3)

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

int searchNode(node *head,int x)
{
    int pos=1;
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==x)
            return pos;
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    cout<<searchNode(head,30);
    return 0;
}
