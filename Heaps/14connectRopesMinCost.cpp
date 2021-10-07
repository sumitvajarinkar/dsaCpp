///Minimum Cost of ropes - Connect ropes
//O(n log n) O(n)

/*
i/p: n = 4,arr[] = {4, 3, 2, 6}
o/p: 29

Always take 2 minimum ropes cost and add to get minimum cost.

in min heap
2
3
4
6

first=2
second=3
cost=5

min heap
4
5
6

first=4
second=5
cost=5+4+5=14

min heap
6
9

first=6
second=9
cost=14+15=29


*/

#include<bits/stdc++.h>
using namespace std;

int minCostRopes(int arr[],int n)
{
    priority_queue<int,vector<int>,greater<int>>minh(arr,arr+n);
    int cost=0;
    while(minh.size()>=2)
    {
        int first=minh.top();
        minh.pop();

        int second=minh.top();
        minh.pop();

        cost+=first+second;

        minh.push(first+second);
    }
    return cost;
}

int main()
{

    int n;
    cout<<"Enter no. of element ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Minimum cost of rope is "<<minCostRopes(arr,n);

}
