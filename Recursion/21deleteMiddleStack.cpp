///Delete Middle Element in Stack
//space : O(1)
/*
i/p :n=5, arr[]=1,2,3,4,5
o/p : 1,2,4,5

in stack :
5
4
3
2
1

delete middle from top is 5/2+1=3th element
1 2 4 5

i/p :n=5, arr[]=1,2,3,4,5,6
o/p : 1,2,3,5,6

in stack :
6
5
4
3
2
1

delete middle from top is 6/2+1=4th element
1 2 4 5 6
*/

#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int temp)
{
    //temp is middle element, pop it
    if(temp==1)
    {
        s.pop();
        return;

    //store top, pop it
    int k=s.top();
    s.pop();
    //recursive call
    solve(s,temp-1);
    s.push(k);
    return;
}
stack<int> deleteMid(stack<int> &s,int n)
{
    if(s.size()==0)
        return s;
    //to find middle element
    int temp=(n/2)+1;
    solve(s,temp);
    return s;
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
	for(auto x:v){
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
	deleteMid(s,n);
    printStack(s);
    return 0;
}
