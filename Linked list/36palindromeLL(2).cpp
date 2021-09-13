///Palindrome of LL
//Approach 2
//O(n) O(1)

//i/p: r -> a -> d -> a -> r
//o/p: Palindrome


#include <bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node* next;
    node(char x){
        data=x;
        next=NULL;
    }
};

//O(n)
node *reverseLL(node *head)
{
    // 10 -> 20 -> 30
    // NULL<- 10 -> 20 -> 30
    //       prev  curr->next
    // <- 10 <- 20 -> 30
    //       prev   curr->next
    // <- 10 <- 20 <- 30
    //               prev

    //Here we simply reverse the pointers
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev; //Prev is new head
}

bool isPalindrome(node *head){
	//if LL empty
    if(head==NULL)
		return true;

		//find middle node
        node *slow=head,*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        //call reverse ll
        node *rev=reverseLL(slow->next);

        // m a d a m
        // |_|___|_|

        node *curr=head;
        while(rev!=NULL){
				//if not same not palindrome
            if(rev->data!=curr->data)
                return false;
            rev=rev->next;
            curr=curr->next;
        }
        return true;
}

int main()
{
	node *head=new node('m');
	head->next=new node('a');
	head->next->next=new node('d');
	head->next->next->next=new node('a');
	head->next->next->next->next=new node('m');
	if(isPalindrome(head))
	    cout<<"Palindrome";
	else
	    cout<<"No Palindrome";
	return 0;
}
