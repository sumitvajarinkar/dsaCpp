///Palindrome of LL
//Approach 1 - using stack
//O(n) O(n)

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

bool isPalindrome(node *head){
    stack<char> s;

    for(node *curr=head;curr!=NULL;curr=curr->next)
        s.push(curr->data);
	/*m
	  a
	  d
	  a
	  m
	*/
	//if not same return false
	//else pop it
    for(node *curr=head;curr!=NULL;curr=curr->next){
        if(s.top()!=curr->data)
            return false;
		else
			s.pop();
    }
    //if stack empty means palindrome all matched
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
