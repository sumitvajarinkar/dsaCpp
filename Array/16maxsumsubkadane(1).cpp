//maximum Sum subarray - Kadane's Algorithm
//Approach 1
//O(n^2)

//This is Kadane's Algorithm- Must have one positve no. in array to apply this algo

//Subarray means:
/*
must be contigious
{1,2,3} : {1},{2},{3},{1,2},{2,3},1,2,3}
*/
#include<bits/stdc++.h>
using namespace std;
int maxsumsubarraykadane(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			curr+=arr[j];
			res=max(res,curr);
		}
	}
	return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxsumsubarraykadane(arr,n);
    return 0;
}

