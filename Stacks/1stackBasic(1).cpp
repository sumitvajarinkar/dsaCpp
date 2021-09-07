/// Stack in C++ STL
//Basic operation
//O(n) O(n)

/*
push : add new element
pop : removes existing element
top : returns top element of stack
isEmpty : is Stack empty (1) or not (0)

Stack implement by :
1. Array  2.Linked lists  3.Queue(in Queue DS folder)

stack of 10 20 30 40
it will be insert like this in reverse order

top : 40

|40|
|30|
|20|
|10|
----

*/

#include<iostream>
#include<stack>
using namespace std;

  void traverse(stack<int>s){
      cout<<"Stack is \n";
  while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }}

int main(){

stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout<<"Size of stack "<<s.size()<<endl;
cout<<"Top element "<<s.top()<<endl;
traverse(s);
s.pop();
cout<<"New top element "<<s.top()<<endl;
traverse(s);
return 0;

}
