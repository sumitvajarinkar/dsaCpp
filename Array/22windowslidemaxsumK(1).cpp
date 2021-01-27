//window sliding method for negative no.
//Find maximum sum of K consecutive elements
//Approach 1
//O(n^2)

/*
ip : arr[] = {5 -10 6 90 3} k=2
o/p : 96
*/
#include<bits/stdc++.h>
using namespace std;
int maxsumofK(int arr[],int n,int k)
{
    int max_sum=INT_MIN;
    for(int i=0;i+k-1<n;i++)
    {
    	int sum=0;
    	for(int j=0;j<k;j++)
    	{
    		sum+=arr[i+j];
		}
      max_sum=max(sum,max_sum);
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

