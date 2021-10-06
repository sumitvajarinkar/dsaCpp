/// K Closest Numbers
//Approach 1
//O(nk) O(n)

/*
i/p:n=5, arr[]=5,6,7,8,9, k=3,x=7
o/p:6,7,8

Given a sorted integer array arr, two integers k and x, return the k closest
integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b

5,6,7,8,9, k=3,x=7

i=0 : min_diff=0, idx=2 print 7
i=1 : min_diff=1, idx=1 print 6
i=3 : min_diff=1, idx=3 print 8

*/

#include<bits/stdc++.h>
using namespace std;

int KClosest(int arr[],int n,int k,int x)
{

//visited array
    bool visited[n]= {false};

    for(int i=0; i<k; i++)
    {

        int min_diff=INT_MAX;
        int min_diff_idx;

        for(int j=0; j<n; j++)
        {
            if(visited[j]==false && abs(arr[j]-x) <= min_diff)
            {
                min_diff=abs(arr[j]-x);
                min_diff_idx=j;
            }
        }
        cout<<arr[min_diff_idx]<<" ";
        visited[min_diff_idx]=true;

    }
}

int main()
{

    int n,k,x;
    cout<<"Enter no. of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter value of K ";
    cin>>k;
    cout<<"Enter value of x ";
    cin>>x;
    KClosest(arr,n,k,x);
}
