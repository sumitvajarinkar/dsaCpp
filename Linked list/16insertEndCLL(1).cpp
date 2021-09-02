
///Insert at end of circular LL
//Approach 1
//O(n)

//i/p: 10 -> 20 -> 30, x=40
//o/p: 10 -> 20 -> 30 -> 40
//      |________________|


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

node *insertEnd(node *head,int x){
node *temp=new node(x);
//if null
if(head==NULL)
{
	temp->next=temp;
	return temp;
}
else
{
	//10->20->30->40->connect to 10
	node *curr=head;
//	till end as it is circular so head
	while(curr->next!=head)
		curr=curr->next;
	//last node -> next = new node(temp)
	curr->next=temp;
	//temp->next =head
	temp->next=head;
	return head;
}
}

void printlist(node *head){
if(head==NULL)
	return;
cout<<head->data<<" ";
for(node *p=head->next; p!=head;p=p->next)
	cout<<p->data<<" ";
cout<<endl;
}

int main(){
//	node *head=NULL;
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
//Circular LL - last connect to head
head->next->next->next=head;
printlist(head);
head=insertEnd(head,40);
printlist(head);
}
