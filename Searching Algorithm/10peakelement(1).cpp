//Find a peak element - not smaller than neighbour
//Approach 1
//O(n) O(1)
/*
i/p: arr[]:{11,10,20,15,25} 
o/p: 11 or 20 or 25(1st and last element check if greater)
*/

#include<bits/stdc++.h>
using namespace std;

int getPeak(int arr[],int n)
{
	if(n==1)
		return arr[0]; //if only one element present
	if(arr[0]>arr[1])
		return arr[0]; //if 1st element greater than 2nd
	if(arr[n-1]>arr[n-1])
		return arr[n-1]; //if 1st element greater than 2nd
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[i-1] && arr[i]>=arr[i+1])
			return arr[i];
	}
	//it will never return -1 because anyone will be peak from all.
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<getPeak(arr,n);
	return 0;
}
