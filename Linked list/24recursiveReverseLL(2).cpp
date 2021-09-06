/// Recursive reverse LL (Optimal of iterative reverse LL)
//Approach 2
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

node *recursiveReverseLL(node *head,node *prev)
{
	 // 10 -> 20 -> 30
    // NULL<- 10 -> 20 -> 30
    //       prev  curr->next
    // <- 10 <- 20 -> 30
    //       prev   curr->next
    // <- 10 <- 20 <- 30
    //               prev

    //Here we simply reverse the pointers

    if(head==NULL)
		return prev;
	node *next=head->next;
	head->next=prev;
	return recursiveReverseLL(next,head);
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
    head=recursiveReverseLL(head,NULL);
    printlist(head);

    return 0;
}



