//Majority elements (greater than (>) n/2)
//Approach 1
//O(n^2)
/*
i/p : arr[]={8,3,4,8,8} n=5
o/p : 8
*/


#include<bits/stdc++.h>
using namespace std;
int findmajority(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    	int count=1;
    	for(int j=i+1;j<n;j++)
    	{
    		if(arr[i] == arr[j])
    			count++;
    	}
    		if(count > n / 2)
			  return arr[i];
	}
	return -1;
}
int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findmajority(arr,n);
    return 0;
}
