//Bitonic array : find max element
/*
monotonic : 5 6 7 8 9 11 (arr[i] != arr[i+1]
bitonic : 3 4 6 10 7 2 (increse -> peak -> decrease

i/p : arr[]={1 3 8 12 4 2}
o/p : 12 (12 is peak)
here we use peak logic
*/
#include<bits/stdc++.h>
using namespace std;

int getPeak(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
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
