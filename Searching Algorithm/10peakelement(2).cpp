//Find a peak element - not smaller than neighbour
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
		if((mid==0 || arr[mid-1] == arr[mid]) &&
			(mid==n-1) || arr[mid+1] <=arr[mid])
			return arr[mid];
		if(mid>0 && arr[mid-1] >=arr[mid])
			high=mid-1;
		else
			low=mid+1;
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
