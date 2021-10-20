///Sort an Array
/*
i/p :n=5, arr[]=4,2,5,1,3
o/p : 1,2,3,4,5

*/

#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }
    else
    {
        int val=v[v.size()-1];
        v.pop_back();
        insert(v,temp);
        v.push_back(val);
        return;
    }
}

int sortIt(vector<int> &v)
{
    if(v.size()==1)
        return 0;
    int temp=v[v.size()-1];
    v.pop_back();
    sortIt(v);
    insert(v,temp);
}

void printVect(vector<int> &v)
{
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}

int main()
{
    vector<int>v= {5,2,3,1,4};
    sortIt(v);
    printVect(v);
    return 0;
}
