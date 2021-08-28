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

node *insertGivenPos(node *head,int pos,int data){

node *temp=new node(data);
//for inserting at 1st position
if(pos==1){
	temp->next=head;
	return temp;
}
node *curr=head;
for(int i=1;i<=pos-2 && curr!=NULL;i++)
	curr=curr->next;
//if pos is more than nodes
if(curr==NULL)
	return head;

temp->next=curr->next;
curr->next=temp;
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
	node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    head=insertGivenPos(head,3,5);
    printlist(head);

    return 0;
}



