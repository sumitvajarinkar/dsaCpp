//Given arr fixed array and multiple queries of following types on the array
//O(1) O(n)
//i/p : arr[]= {2 8 3 9 6 5 4} queries : getsum(0,2), getsum(1,3),getsum(2,6)
//o/p : 13 20 27  (13 sum of element from 0 to 2 index,...)

//can be solved using prefix sum : 2 10 13 22 28 33 37

#include<bits/stdc++.h>
using namespace std;
int get_sum(int prefix_sum[],int l,int r)
{
    if(l!=0)
        cout<<prefix_sum[r]-prefix_sum[l-1];
    else
        cout<<prefix_sum[r];
}

int prefix_sum(int arr[],int n,int nq)
{
    int prefix_sum[n],l,r;
    prefix_sum[0]=arr[0];			//store 1st element in sum
    for(int i=1;i<n;i++)
        prefix_sum[i]=prefix_sum[i-1]+arr[i]; //here we calculate prefix sum 
    for(int i=0;i<nq;i++)
    {
        cin>>l>>r;
        get_sum(prefix_sum,l,r);
    }
}

int main()
{
    int n,nq,l,r;
    cout<<"No. of element ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the no. of queries ";
    cin>>nq;
    prefix_sum(arr,n,nq);
    return 0;
}

