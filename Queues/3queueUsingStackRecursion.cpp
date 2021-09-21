/// Queues using stack + recursion
//O(n) O(n)

/// FIFO -first in First out


//Stack : Remove most recently added item
//Queue : Remove least recently added item

/*
Operations :
1.Enqueue : add in rear/back
2.Dequeue : remove from front
3.Front : remove from front
4.Rear/back : add from rear

Implementation of Queue:

        1. Using array 2. Using LL 3. Using Stacks
*/

#include<bits/stdc++.h>
using namespace std;
struct queued
{
    stack<int>s;
    ///add in rear/back
    void enqueue(int x)
    {
        s.push(x);
    }
    ///remove from front
    int dequeue()
    {
        //if stack empty
        if(s.empty())
        {
            cout<<"Empty\n";
            exit(0);
        }
        //stack top store in x
        int x=s.top();
        s.pop();

        //if stack empty
        if(s.empty())
            return x;

        //recursive call
        int item=dequeue();
        s.push(x);
        return item;
    }
};
int main()
{
    queued q;
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  cout<<q.dequeue()<<" ";
  cout<<q.dequeue()<<" ";
  cout<<q.dequeue();
  return 0;

}
