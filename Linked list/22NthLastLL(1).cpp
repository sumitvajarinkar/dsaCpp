/// Find n'th node from end
//Approach 1
//O(n)- 2 traversals

//i/p: 10 20 30 40 50, n=2
//o/p: 40(from last 2nd node)

#include <bits/stdc++.h>
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

node *nThLast(node *head,int n)
{
    int len=0;
    //loop to count nodes
    for(node *curr=head;curr!=NULL;curr=curr->next)
		len++;
    //if length < n it means absent
	if(len<n)
		return NULL;
    //curr move to head after counting till end
	node *curr=head;
	// 10 20 30 40 50, n=3
	//len-n+1 : 5-3+1 =3
	//from starting left side at 3 we get 30 as o/p.
	for(int i=1;i<len-n+1;i++)
		curr=curr->next;
	cout<<curr->data;
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
//    node *head=NULL;
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    printlist(head);
    nThLast(head,2);

    return 0;
}



