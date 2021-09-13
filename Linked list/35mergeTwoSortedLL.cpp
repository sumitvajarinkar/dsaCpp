///Merge two sorted arrays
//O(m+n) O(1)

//i/p: a: 10->20->30, b:5->25
//o/p: 5->10->20->25->30

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node *sortedMerge(node *a,node *b)
{
	//if a is null return b
    if(a==NULL)
        return b;
	//if b is null return a
    if(b==NULL)
        return a;

	//if a is smaller than b then a is head
    node *head=NULL;
    node *tail=NULL;
    if(a->data <= b->data)
    {
        head=tail=a;
        a=a->next;
    }

	//else b is smaller than a then b is head
    else
    {
        head=tail=b;
        b=b->next;
    }

    //For tail
	while(a!=NULL && b!=NULL){
		//if a is small
		if(a->data <= b->data){
			tail->next=a;
			tail=a;
			a=a->next;
		}
		//else b is small
		else{
			tail->next=b;
			tail=b;
			b=b->next;

		}
	}
	//In a and b
	//if a is small and a->next=NULL comes then append all b at tail
	if(a==NULL)
		tail->next=b;
	//else b is small and b->next=NULL comes then append all a at tail
	else
		tail->next=a;
	return head;
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
	//LL a
    node *a=new node(10);
	a->next=new node(20);
	a->next->next=new node(30);
	printlist(a);

	//LL b
	node *b=new node(5);
	b->next=new node(35);
	printlist(b);

	printlist(sortedMerge(a,b));
	return 0;
}
