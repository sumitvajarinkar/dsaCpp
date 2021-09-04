// Reverse LL
// Approach 1
// O(n) O(n) - 2 traversals

//i/p:10 -> 20 -> 30 -> 40
//o/p:40 -> 30 -> 20 -> 10

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

node *reverseLL(node *head)
{
	//take vector - extra sapce
	vector<int>arr;
	//push in vector
	for(node *curr=head;curr!=NULL;curr=curr->next)
		arr.push_back(curr->data);
	//10 20 30
	//10 20
	//10
	//__
	for(node *curr=head; curr!=NULL;curr=curr->next){
		curr->data=arr.back();
		arr.pop_back();
	}
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
//    node *head=NULL;
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    printlist(head);
    reverseLL(head);
    printlist(head);

    return 0;
}


