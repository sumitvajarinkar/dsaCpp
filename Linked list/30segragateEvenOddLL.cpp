///Segregate even & odd nodes of a LL
//O(n) O(1) - 1 traversal

/*
Approach 1
O(n) O(1)
1.traverse till last node
2.if odd remove and add at last

Approach 2
es-even start, ee-even end, os-odd start, oe=odd end

e1 -> e2 -> e3 -> o1 -> o2 -> o3
es		    ee    os          oe
*/
//i/p:17 15 8 12 10 5 4
//o/p:8 12 10 4 17 15 5



#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *evenOdd(node* head)
{
	node *es=NULL, *ee=NULL, *os=NULL, *oe=NULL;
	for(node *curr=head;curr!=NULL;curr=curr->next){
		int x=curr->data;
		//if node is even
		if(x%2==0){
			if(es==NULL){
				es=curr;
				ee=es;
			}
			else{
				ee->next=curr;
				ee=ee->next;
			}
		}
		//at node is odd
		else{
			if(os==NULL){
				os=curr;
				oe=os;
			}
			else{
				oe->next=curr;
				oe=oe->next;
			}
		}
	}
	//if any es or os is NULL return head
	if(os==NULL || es==NULL)
		return head;
	//assign even->tail to odd->head
	//odd->tail to null
	ee->next=os;
	oe->next=NULL;
	//return new head as even start
	return es;
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
	node *head=new node(10);
	head->next=new node(13);
	head->next->next=new node(37);
	head->next->next->next=new node(42);
	head->next->next->next->next=new node(24);
	printlist(head);
	head=evenOdd(head);
	printlist(head);
	return 0;
}
