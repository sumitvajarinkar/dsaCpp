///Intersection of two LL
//Approach 1
//O(m+n) O(m)

/*
Approach 1:
1. take set
2. 1st traverse put all in set from head1
3. 2nd traverse from head2
4. check if any node is same then return as intersection

Approach 2:
1.count nodes in both the list (L1,L2)
2.traverse the biggest list by abs(L1-L2)
3.traverse both the lists simultaneously
until we get the common node.


*/

//i/p: head1 5 -> 8 -> 7 -> 10 -> 12 ->15
//				            /
//			         head2 9
//o/p:10

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

int
intersectionLL(node* head1, node* head2)
{
    unordered_set<node*> s;
    node* curr=head1;
    //insert in set from LL1
    while(curr!=NULL){
        s.insert(curr);
        curr=curr->next;
    }
    //if any node from LL2 is in set then return curr->next
    curr=head2;
    while(curr!=NULL){
        if(s.find(curr)!=s.end())
            return curr->data;
        curr=curr->next;
    }
    return -1;
}

int main()
{
	/*
		Creation of two linked lists

		1st 3->6->9->15->30
		2nd 10->15->30

		15 is the intersection point
	*/

	node* newnode;

	node* head1 = new node(10);

	node* head2 = new node(3);

	newnode = new node(6);
	head2->next = newnode;

	newnode = new node(9);
	head2->next->next = newnode;

	newnode = new node(15);
	head1->next = newnode;
	head2->next->next->next = newnode;

	newnode = new node(30);
	head1->next->next = newnode;

	head1->next->next->next = NULL;

	cout<<intersectionLL(head1, head2);
	return 0;
}
