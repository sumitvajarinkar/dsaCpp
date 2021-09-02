
///Insert at begin of circular LL
//Approach 2
//O(1)

//i/p: 10 -> 20 -> 30, x=5
//o/p: 5 -> 10 -> 20 -> 30
//     |________________|


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

node *insertBegin(node *head,int x){
node *temp=new node(x);
//if null
if(head==NULL)
	temp->next=temp;
else
{
	//10 5 20 30 40
	// then swap 10 and 5
	temp->next=head->next;
	head->next=temp;
	//swapping
	int t=head->data;
	head->data=temp->data;
	temp->data=t;
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
head->next->next->next=new node(40);
//Circular LL - last connect to head
head->next->next->next->next=head;
printlist(head);
head=insertBegin(head,5);
printlist(head);
}
