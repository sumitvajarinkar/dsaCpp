///Middle of LL
//Approach 1
//O(n)-2 traversals

//i/p: 10->20->30->40
//o/p: 30(2nd node of 2 middle node)

//i/p: 10->20->30->40->50
//o/p: 30(one middle node)


#include<bits/stdc++.h>
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

node *middleLL(node *head)
{
    //if head is null
    if(head==NULL)
        return NULL;

    int count=0;
    node *curr;
    //count nodes
    for(curr=head; curr!=NULL; curr=curr->next)
		count++;
    //move curr at head which was at last node
	curr=head;
	//count/2 will give middle node
	for(int i=0;i<count/2;i++)
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
    printlist(head);
    middleLL(head);

    return 0;
}



