//Circular Doubly LL

//  _________
// |         |
// 10 = 20 = 30
// |_________|

//Previous of head is last node
//Next of last node is head

//We get all advantages of circular and doubly LL in O(1) without extra tail.

///Insert at head

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

Node *insertAtHead(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
   //10 20 30, temp=5

   //30<-5
    temp->prev=head->prev;
    //5->10
    temp->next=head;
    //30->5
    head->prev->next=temp;
    //5<-10
    head->prev=temp;
    return temp;
}


int main()
{
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	temp2->next=head;
	temp2->prev=temp1;
	temp1->prev=head;
	head->prev=temp2;
	head=insertAtHead(head,5);
	printlist(head);
	return 0;
}
