/// Queue using Stacks
//O(1) O(n)

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

/*
Moves the elements once and moves elements only if stack2 empty.
So, the amortized complexity of the dequeue operation becomes \Theta (1)  .
*/

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> stack1, stack2;
    //DS
    MyQueue() {

    }

    // Push element x to the back of queue.
    void push(int x) {
        stack1.push(x);
    }

    // Removes the element from in front of queue and returns that element.
    int pop() {
        // shift stack1 to stack2
        if (stack2.empty())
            while (stack1.size())
                stack2.push(stack1.top()), stack1.pop();

        int x = stack2.top();
        stack2.pop();
        return x;
    }

    // Get the front element.
    int top() {
        // shift stack1 to stack2
        if (stack2.empty())
            while (stack1.size())
                stack2.push(stack1.top()), stack1.pop();
        return stack2.top();
    }

    // Returns whether the queue is empty.
    bool empty() {
        return stack1.empty() && stack2.empty();
    }
    int size(){
    return stack2.size();
    }

};
int main()
{
    MyQueue q;
  q.push(10);
  q.push(20);
  q.push(30);
  cout<<"Top "<<q.top()<<endl;
  cout<<"Size "<<q.size()<<endl;

  cout<<q.pop()<<" ";
  cout<<q.pop()<<" ";
  cout<<q.pop();
  cout<<"\nSize "<<q.size()<<endl;
  return 0;

}
