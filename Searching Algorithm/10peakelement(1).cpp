//Find a peak element - not smaller than neighbor
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

	//if 1st element greater than 2nd
	if(arr[0]>arr[1])
		return arr[0];

	//if last element greater than 2nd last
	if(arr[n-1]>arr[n-2])
		return arr[n-1];

	//Middle peak
	for(int i=0;i<n;i++)
	{
		//check if any previous and next are smaller than element
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
