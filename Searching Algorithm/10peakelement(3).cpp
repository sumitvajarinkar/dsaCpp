//Find a peak element - not smaller than neighbor
//Approach 2
//O(log n) O(1)
/*
i/p: arr[]:{11,10,20,15,25}
o/p: 11 or 20 or 25(1st and last element check if greater)
*/

#include<bits/stdc++.h>
using namespace std;

int getPeak(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		// for mid from 1 to n-2 elements
		if(mid>0 && mid<n-1)
		{
			if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
				return arr[mid];
			else if(arr[mid-1] >arr[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		// for 1st 2 element
		else if(mid == 0)
		{
			if(arr[0]>arr[1])
				return arr[0];
			else
				return arr[1];
		}
		//for last 2 element
		else if(mid == n-1)
		{
			if(arr[n-1]>arr[n-2])
				return arr[n-1];
			else
				return arr[n-2];
		}

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
