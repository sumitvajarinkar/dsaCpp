///Circular LL

// 10 -> 20 -> 30
//  |___________|

#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
node(int d){
data=d;
next=NULL;
}
};

/// for loop

//void printlist(node *head){
//if(head==NULL)
//	return;
//cout<<head->data<<" ";
//for(node *p=head->next; p!=head;p=p->next)
//	cout<<p->data<<" ";
//}

///do-while

void printlist(node *head){
if(head==NULL)
	return;
node *p=head;
do{
	cout<<p->data<<" ";
	p=p->next;
}while(p!=head);
}

int main(){
node *head=new node(10);
head->next=new node(5);
head->next->next=new node(20);
head->next->next->next=new node(15);
//Circular LL - last connect to head
head->next->next->next->next=head;
printlist(head);
}
