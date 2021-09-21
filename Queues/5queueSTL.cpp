///Queues in STL


#include<bits/stdc++.h>
using namespace std;
void traverse(queue<int>q)
{
    queue<int>g=q;
       cout<<"The queue is:\n";
    while(!g.empty())
    {
        cout<<"\t"<<g.front();
        g.pop();
    }
    cout<<"\n";
}
int main()
{
   queue<int>q;
   q.push(10);
   q.push(20);
   q.push(30);
    traverse(q);
    cout<<"\nsize:"<<q.size();
    cout<<"\nfront:"<<q.front();
    cout<<"\nback:"<<q.back();
    cout<<"\nafter popping\n";
    q.pop();
    traverse(q);
    return 0;
}
