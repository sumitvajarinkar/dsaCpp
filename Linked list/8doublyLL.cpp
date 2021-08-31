//Structure of Doubly linked list

#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *prev;
node *next;
node(int d){
data=d;
prev=next=NULL;
}
};

void printlist(node *head){
node *curr=head;
while(curr!=NULL){
	cout<<curr->data<<" ";
	curr=curr->next;
}
cout<<endl;
}
//  head->10 = 20 = 30 -> NULL
//			 temp1  temp2

int main(){
node *head=new node(10);
node *temp1=new node(20);
node *temp2=new node(30);
head->next=temp1;
temp1->prev=head;
temp1->next=temp2;
temp2->prev=temp1;
printlist(head);
}
