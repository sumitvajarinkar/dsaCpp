//Detect & remove loop in LL
//O(m+k)

//i/p: 10 -> 15 -> 12 -> 20
//			 |___________|
//o/p:10 -> 15 -> 12 -> 20 -> NULL

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



node *detectAndRemoveLoop(node* head)
{
	/*
	  10 -> 15 -> 12 -> 20
			 |___________|
	  s,f   s     f
				  s     s
            f           f
at 20 slow and fast meet loop exist.
*/
	//detect loop
	node *slow=head,*fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			break;
	}
	//Remove loop by searching loop point and assign to NULL
	//loop is absent
    if(slow!=fast)
		return head;
/*
	slow=head
	fast as it is at slow==fast,
	now move both by 1 till they meet
	10 -> 15 -> 12 -> 20
		   |___________|
					   f
	s
	       s
		   f
	fast->next=15
	so fast->next=NULL
*/
	//move slow towards head
	slow=head;
	while(slow->next!=fast->next)
	{
		slow=slow->next;
		fast=fast->next;
	}
	//assigned to NULL
	fast->next=NULL;
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
	node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
	detectAndRemoveLoop(head);
	printlist(head);
	return 0;
}


