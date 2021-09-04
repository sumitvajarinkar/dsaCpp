// Reverse LL
// Approach 2
// O(n) O(1) - 1 traversal

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

node *reverseLL(node *head)
{
    // 10 -> 20 -> 30
    // NULL<- 10 -> 20 -> 30
    //       prev  curr->next
    // <- 10 <- 20 -> 30
    //       prev   curr->next
    // <- 10 <- 20 <- 30
    //               prev

    //Here we simply reverse the pointers


    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev; //Prev is new head
}

// Striver approach - just name changed although its same

//node *reverseLL(node *head)
//{
//
//    node *newhead=NULL;
//    while(head!=NULL){
//        node *next=head->next;
//        head->next=newhead;
//        newhead=head;
//        head=next;
//    }
//    return newhead;
//}


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
    head=reverseLL(head);
    printlist(head);

    return 0;
}


