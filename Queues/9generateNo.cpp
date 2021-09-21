#include<bits/stdc++.h>
using namespace std;
void printfirstN(int n)
{
    queue<string>q;
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++)
    {
        string c=q.front();
        cout<<c<<" ";
        q.pop();
        q.push(c+"5");
        q.push(c+"6");
    }
}
int main()
{
    int n;
    cin>>n;
    printfirstN(n);
    return 0;
}
