//Recursive display of LL
//O(n) O(n)
//Iterative display of LL
//O(n) O(1)

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

// Recursive
void printlist(node *head)
{
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    printlist(head->next);

}

// Iterative
//void printlist(node *head){
//    Node *curr=head;
//    while(curr!=NULL){
//        cout<<curr->data<<" ";
//        curr=curr->next;
//    }
//}

int main()
{

// Representation 1

//    node *head=new node(10);
//    head->next=new node(20);
//    head->next->next=new node(30);
//    head->next->next->next=new node(40);
//    printlist(head);

// Representation 2
    node *head=new node(10);
	node *temp1=new node(20);
	node *temp2=new node(30);
	head->next=temp1;
	temp1->next=temp2;
    printlist(head);
    return 0;
}
