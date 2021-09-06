/// Recursive reverse LL
//Approach 1
//O(n) O(n)

//i/p:10 -> 20 -> 30 -> 40
//o/p:40 -> 30 -> 20 -> 10

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

node *recursiveReverseLL(node *head)
{
    if(head==NULL || head->next==NULL)
		return head;
	node *rest_head=recursiveReverseLL(head->next);
	node *rest_tail=head->next;
	rest_tail->next=head;
	head->next=NULL;
	return rest_head;
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
    head=recursiveReverseLL(head);
    printlist(head);

    return 0;
}



