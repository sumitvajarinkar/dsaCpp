/// Detect loop in LL
//Approach 3 - (modification in pointer in LL)
//O(n) O(1)

//i/p: 10 -> 15 -> 12 -> 20
//			 |___________|
//o/p:Yes(Loop present)

/*
Approaches 5

Approach 1 : O(n^2)
1. traverse till loop end
2. lastnode -> next is present in traversal

Approach 2 : O(n) O(n)
1. modifies LL
2. using visited

Approach 3 : O(n) O(1)
1. modification in pointer

Approach 4 : O(n) O(n)
1. modification in structure

Approach 5 : O(n) O(1)
1. NO modification in pointers/structure

*/

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


/*

10 -> 15 -> 12 -> 20
	  |___________|

	temp

all pointing to temp by modifying pointers here loop
exist at 15 will again point to temp.
return true

*/
bool isLoop(node* head)
{   node *temp=new node(0);
    node *curr=head;
    while (curr != NULL) {
        if (curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;
}

int main()
{
	node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
	return 0;
}
