///Purchasing Maximum Items
//Approach 2
//O(n log k) O(n)

/*
i/p: n=5, cost[]={1,12,5,111,200}, sum=10
o/p: 2 (1 and 5)

push in min heap

1
5
12
111
200

pop top and subtract from sum while top < sum count res.
else break move next iteration

*/
#include<bits/stdc++.h>
using namespace std;

int purchaseMaxItem(int cost[],int n,int sum)
{
    priority_queue<int,vector<int>,greater<int>>minh;
    int res=0;
    for(int i=0; i<n; i++)
        minh.push(cost[i]);

        for(int i=0; i<n; i++)
        {
            if(minh.top()<=sum)
            {
                sum-=minh.top();
                minh.pop();
                res++;
            }
            else
                break;
        }
        return res;
}

int main()
{
    int n,sum;
    cout<<"Enter no. of items ";
    cin>>n;
    int cost[n];
    cout<<"Enter cost of items ";
    for(int i=0; i<n; i++)
        cin>>cost[i];
    cout<<"Enter sum ";
    cin>>sum;
    cout<<purchaseMaxItem(cost,n,sum);
}



