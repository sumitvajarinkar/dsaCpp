///Intersection of two LL
//Approach 2
//O(m+n) O(1)

/*
Approach 1:
1.take set
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

//for counting nodes
int getCount(node* head)
{
    node* curr = head;
    int count = 0;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}


int getIntersection(int d, node* head1, node* head2)
{
    node* current1 = head1;
    node* current2 = head2;

//     head1 5 -> 8 -> 7 -> 10 -> 12 ->15
//				            /
//			         head2 9
//
// here difference d is 2 so we traverse 2 nodes ahead in head1
//            head1 7 -> 10 -> 12 ->15
//				         /
//			      head2 9


    for (int i = 0; i < d; i++) {
        if (current1 == NULL) {
            return -1;
        }
        current1 = current1->next;
    }

    //we move current1 and current2 forward by 1
    //if they meet we get intersection
    while (current1 != NULL && current2 != NULL) {
        if (current1 == current2)
            return current1->data;

        current1 = current1->next;
        current2 = current2->next;
    }

    //else return -1
    return -1;
}

int intersectionLL(node* head1, node* head2)
{
	//call for count of LL
    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d;

    //if c1 is greater than c2
    if (c1 > c2) {
        d = c1 - c2;
        return getIntersection(d, head1, head2);
    }
    //if c2 is greater than c1
    else {
        d = c2 - c1;
        return getIntersection(d, head2, head1);
    }
}

int main()
{
	/*s
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

