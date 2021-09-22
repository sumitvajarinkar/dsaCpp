///Minimum element in Stack O(n) space
// 2 stacks


#include <bits/stdc++.h>
using namespace std;

struct MyStack {

    stack<int> s1;
    stack<int> s2;

void push(int x) {

      if(s1.empty() ) {
          s1.push(x);s2.push(x);return;
      }

      s1.push(x);

      if(s2.top()>=s1.top())
        s2.push(x);
   }

void pop() {

    if(s2.top()==s1.top())
        s2.pop();
    s1.pop();

   }

int top() {
     return s1.top();
   }

int getMin() {
      return s2.top();
   }
};

int main()
{
    MyStack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();

    cout<<" Minimum Element from Stack: " <<s.getMin();

    return 0;
}
