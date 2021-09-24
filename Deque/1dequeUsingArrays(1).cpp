///Deque using Arrays
/*
Basic operations :
insertFront
insertLast
deleteFront
deleteLast
getFront
getRear
isEmpty
isFull

Doubly ended queue

insert/delete from head as well as tail

*/


#include<iostream>
using namespace std;
#define max 5
class deque
{
    int a[max];
    int front;
    int rear;
    int size;

public:
    deque(int size)
    {
        front=-1;
        rear=0;
        this->size=size;
    }
    void insertfront(int key);
    void insertrear(int key);
    void deletefront();
    void deleterear();
    bool isfull();
    bool isempty();
    int getfront();
    int getrear();
};
bool deque :: isfull()
{
    return((front == 0 && rear == size-1) ||
            (front == rear + 1));
}
bool deque :: isempty()
{
    return(front == -1);
}
void deque :: insertfront(int key)
{
    if(isfull())
    {
        cout<<"Q is Full\n";
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(front == 0)
        front = size - 1;
    else
        front-=1;
    a[front]=key;
}
void deque :: insertrear(int key)
{
    if(isfull())
    {
        cout<<"Q is full\n";
        return;
    }
    if(front == -1)
    {
      front = 0;
        rear = 0;
    }
    else if(rear == size - 1)
        rear = 0;
    else
        rear +=1;
    a[rear] = key;
}
void deque :: deletefront()
{
   if(isempty())
    {
      cout<<"Q is empty\n";
        return;
    }
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(rear == 0)
        rear = size - 1;
    else
        rear -=1;
}
void deque :: deleterear()
{

        if(isempty())
    {
       cout<<"Q is empty\n";
        return;
    }
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        if(front == size - 1)
        front = 0;
    else
        front += 1;
}
int deque :: getfront()
{
    if(isempty() || rear < 0)
    {
        cout<<"Q is full\n";
        return(-1);
    }
    return a[rear];
}
int deque :: getrear()
{

     if(isempty())
    {
      cout<<"Q is empty\n";
        return -1;
    }
    return a[front];

}

int main()
{
    deque d(max);
     int choice,v;
  while(1)
  {
    cout<<"\n1. Push at front \n2. Push at rear \n3. Delete from front \n4. Delete from rear \n5. Front element \n6. Rear element \n7. Exit \n Enter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Enter element\n";
            cin>>v;
        d.insertfront(v);
        break;
        }
    case 2:
        {
            cout<<"Enter element\n";
            cin>>v;
       d.insertrear(v);
        break;
        }
    case 3:
        {
            d.deletefront();
        break;
        }
    case 4:
        {
            d.deleterear();
            break;
        }
    case 5:
        {
          cout<<d.getfront();
            break;
        }
    case 6:
        {
          cout<<d.getrear();
            break;
        }
    case 7:
        {
            exit(0);
            break;
        }
    default:
        {
          cout<<"Enter a choice\n";
        }
    }
  }
  return 0;
}



