//Search in a sorted rotated array
//Approach 1 - linear search - O(n) O(1)
//Approach 2 -Binary search - O(log n) O(1)
/*
i/p : arr[]: {10,20,30,40,50,8,9} x=8 
o/p : 5
*/
#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[low]<arr[mid])
		{
			if(x>=arr[low] && x<arr[mid])
				high=mid-1;
			else
			 	low=mid+1;
		}
		else
			{
				if(x>arr[mid] && x<=arr[high])
					low=mid+1;
				else
					high=mid+1;
			}
	}
	return -1;
}
int main()
{
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>x;
	cout<<search(arr,n,x);
	return 0;
}
