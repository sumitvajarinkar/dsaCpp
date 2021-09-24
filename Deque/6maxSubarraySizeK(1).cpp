//Maximum in all Subarrays of size K
//Approach 1
//O(n*k) O(1)

/*
i/p: arr[]={10,8,5,12,15,7,6}, k=3
o/p: 10 12 15 15 15 (10 8 5 max is 10 likewise)

n-k+1 gives subarrays of K
5-3+1 = 3

*/


#include<bits/stdc++.h>
using namespace std;

void printMaxK(int a[],int n,int k)
{
    for(int i=0;i<n-k+1;i++)
    {
        int mx=a[i];
        for(int j=i+1;j<i+k;j++)
            mx=max(a[j],mx);

            cout<<mx<<" ";
    }
}

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    printMaxK(a,n,k);
}
