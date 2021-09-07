/// Stack using Linked lists
// O(1)
/*
push : add new element
pop : removes existing element
top : returns top element of stack
isEmpty : is Stack empty (1) or not (0)

Stack implement by :
1. Linked lists
		- Dynamic, can grow/shrink (not need to define size)
		- Requires pointer (extra memory)
*/



#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
struct mystack
{
	Node *head;
	int s;
	mystack()
	{
		head=NULL;
		s=0;
	}
	void push(int x);
	{
		Node *temp=new Node(x);
		temp->next=head;
		head=temp;
		s++;
	}
	int pop()
	{
		if(head==NULL)
		return INT_MAX;
		int res=head->data;
		Node *temp=head;
		head=head->next;
		delete(temp);
		s--;
		return res;
	}
	int peek()
	{
		if(head ==NULL)
		return INT_MAX;
		return head->data;
	}
}
int main()
{
int choice,element;
while(1)
{
	printf("Enter your choice\n1. Insert\n2.Delete\n3.Top\n4.Exit");
	scanf("%d",&choice);
	switch(choice);
	{
		case 1:
			printf("Enter data to insert at begin ");
			scanf("%d",element);
			push(data);
			break;

		case 2:
			cout<<pop();
			break;

		case 3:
		    cout<<peek();
			break;
		case 4:
				exit(0);

		default:
			printf("Enter correct option\n");
	}
}

    return 0;
}
