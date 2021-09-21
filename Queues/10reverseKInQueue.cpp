#include<bits/stdc++.h>
using namespace std;
reversek(queue<int>&q,int k)
{
    if(q.empty()==true || k>q.size()|| k<=0)
        return 0;
    stack<int>s;
    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==0)
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size();i++)
    {
        q.push(q.front());
        q.pop();
    }
}
print(queue<int>&q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    queue<int>q;
    int k;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cin>>k;
    reversek(q,k);
    print(q);
    return 0;
}
