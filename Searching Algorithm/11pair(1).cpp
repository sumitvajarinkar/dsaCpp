/*
Given an sorted/unsorted array and a number X, we need to 
find if there is a pair in the array eith sum wpals to X.

sorted :
		1. Use 2 pointer gives O(n) O(1)
		2. Hashing- O(n) O(n)
unsorted :
		1. use Hashing gives O(n) O(n)
		2. 2 pointer - O(nlogn) to sort + O(n) = O(nlogn) ) (1)
		
Approach 1
O(n^2) O(1)

sorted i/p
i/p : 2 4 8 9 11 12 20 30 sum 23
o/p yes(11+12)
*/

#include<bits/stdc++.h>
using namespace std;

bool paired(int arr,int n,int sum)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j] == sum)
				return true;
		}
	}
	return false;
}
int main()
{
	int n,sum,ans;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>sum;
	ans=paired(arr,n,sum);
	if(ans)
		cout<<"Yes";
	cout<<"No";
	return 0;
	
}
