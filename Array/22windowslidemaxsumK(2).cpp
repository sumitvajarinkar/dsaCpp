//window sliding method for negative no.
//Find maximum sum of K consecutive elements
//Approach 2
//O(n)

/*
ip : arr[] = {5 -10 6 90 3} k=2
o/p : 96
*/
#include<bits/stdc++.h>
using namespace std;
int maxsumofK(int arr[],int n,int k)
{
    int curr_sum=0;
    for(int i=0;i<k;i++)
        curr_sum+=arr[i];
    int max_sum=curr_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum+=(arr[i]-arr[i-k]);//1st element of prev. window delete with adding 4th element
        //curr_sum 5+(6-5)=1==> 6 + 90 ===>96
        max_sum=max(max_sum,curr_sum);

    }
    cout<<max_sum;
}
int main()
{
     int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    maxsumofK(arr,n,k);
    return 0;
}

