/// Deque  using arrays

/*

Doubly ended queue

insert/delete from head as well as tail
*/

#include<bits/stdc++.h>
using namespace std;
struct queued
{
    int rear,front;
    int size;
    int *arr;
    queued(int s)
    {
        front=rear=-1;
        size=s;
        arr=new int[s];
    }
    void enqueue(int value);
    int dequed();
    void display();
};
void queued :: enqueue(int value)
{
    if((front==0 && rear==size-1)|| (rear==(front-1)%(size-1)))
       {
           cout<<"Queue is full\n";
           return;
       }
       else if(front==-1)
        {
            front=rear=0;
            arr[rear]=value;
        }
        else if(rear==size-1&&front!=0)
        {
            rear=0;
            arr[rear]=value;
        }
        else
        {
            rear++;
            arr[rear]=value;
        }
}
int queued :: dequed()
{
    if(front==-1)
    {
        cout<<"\nQueue is empty\n";
        return INT_MIN;
    }
    int data=arr[front];
    arr[front]=-1;
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==size-1)
        front=0;
    else
            front++;

    return data;
}
void queued :: display()
{
    if(front==-1)
    {
        cout<<"\nQueue is empty\n";
        return;
    }
    cout<<"Elements in circular queue are:\n";
    if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
    }
    else
    {
    for(int i=front;i<size;i++)
        cout<<arr[i]<<" ";
    for(int i=0;i<=rear;i++)
        cout<<arr[i]<<" ";
    }
}
int main()
{
    queued q(5);
     int choice,v;
  while(1)
  {
    cout<<"\n1.Push\n2.Pop\n3.Traverse\n4.Exit\nEnter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Enter element\n";
            cin>>v;
        q.enqueue(v);
        break;
        }
    case 2:
        {
        q.dequed();
        break;
        }
    case 3:
        {
            q.display();
        break;
        }
    case 4:
        {
            exit(0);
        }
    default:
        {
            cout<<"Enter a choice\n";
            }
    }
  }
  return 0;
}

