///Queues using 2 Stacks
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
    stack<int>s1,s2;
    ///add in rear/back
    void enqueue(int x)
    {
        s1.push(x);
    }
    ///remove from front
    int dequeue()
    {
         //if both empty
        if(s1.empty() && s2.empty())
        {
            cout<<"Empty\n";
            exit(0);
        }
        //if s2 empty - push in reverse order
        else if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        //return top item from s2 - return in correct order
            int x=s2.top();
            s2.pop();
            return x;
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

