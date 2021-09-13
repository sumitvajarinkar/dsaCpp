///Clone a LL with random pointer
//Approach 1 - hashing
//O(n) O(n)


#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next,*random;
    node(int x)
    {
        data = x;
        next = random = NULL;
    }
};

void print(node *start)
{
    node *ptr = start;
    while (ptr)
    {
        cout << "Data = " << ptr->data << ", Random  = "<< ptr->random->data << endl;
        ptr = ptr->next;
    }
}

node* clone(node *head)
{
    unordered_map<node*,node*> hm;
    for(node *curr=head;curr!=NULL;curr=curr->next)
        hm[curr]=new node(curr->data);

    for(node *curr=head;curr!=NULL;curr=curr->next){
        node *cloneCurr=hm[curr];
        cloneCurr->next=hm[curr->next];
        cloneCurr->random=hm[curr->random];
    }
    node *head2=hm[head];

    return head2;
}

int main()
{
	node* head = new node(10);
    head->next = new node(5);
    head->next->next = new node(20);
    head->next->next->next = new node(15);
    head->next->next->next->next = new node(20);

    head->random = head->next->next;
    head->next->random=head->next->next->next;
    head->next->next->random=head;
    head->next->next->next->random=head->next->next;
    head->next->next->next->next->random=head->next->next->next;

    cout << "Original list : \n";
    print(head);

    cout << "\nCloned list : \n";
    node *cloned_list = clone(head);
    print(cloned_list);

    return 0;
}
