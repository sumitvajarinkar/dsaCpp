///Sort a Stack
/*
i/p :n=5, arr[]=4,2,5,1,3
o/p : 1,2,3,4,5

*/

#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp)
{
    if(s.size()==0 || s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    else
    {
        int val=s.top();
        s.pop();
        insert(s,temp);
        s.push(val);
        return;
    }
}

int sortIt(stack<int> &s)
{
    if(s.size()==1)
        return 0;
    int temp=s.top();
    s.pop();
    sortIt(s);
    insert(s,temp);
}

void printStack(stack<int> &s)
{
    vector<int>v;
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}

int main()
{
//    stack<int>s;
//	s.push(3);
//	s.push(4);
//	s.push(1);
//	s.push(2);
//	s.push(5);
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    sortIt(s);
    printStack(s);
    return 0;
}
