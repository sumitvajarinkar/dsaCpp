/// Stack using Array
// O(1)
/*
push : add new element
pop : removes existing element
top : returns top element of stack
isEmpty : is Stack empty (1) or not (0)

Stack implement by :
1. Array
		- Easy to implement no pointer(no extra memory)
		- Not dynamic, does not grow/shrink (need to define size)
*/


#include<iostream>
using namespace std;
#define max 3
class stack
{
    int top;
public:
    int a[max];
    stack()
    {
        top=-1;
    }
    bool push(int x);
    int pop();
    bool isEmpty();
};
bool stack::push(int x)
{
    if(top>=(max-1))
    {
        cout<<" Stack overflow\n";
        return false;
    }
    else
    {
        a[++top]=x;
        cout<<x<<" Pushed into stack\n";
        return true;
    }
}
int stack::pop()
{
    if(top<0)
    {
        cout<<" Stack underflow\n";
        return 0;
    }
    else
    {
        int x=a[top--];
        return x;
    }
}
bool stack::isEmpty()
{
    return(top<0);
}
int main()
{
    //
    class stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.pop()<<" Popped from stack\n";
    return 0;
}

