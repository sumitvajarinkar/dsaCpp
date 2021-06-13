//Find the index of 1st One's in binary array an infinite Sorted Array (Unbounded Binary Search)
//O(log n) O(1)
/*
i/p : arr[]={0 0 0 0 0 1 1 1 1 1...}
o/p :5 (index of 1st One's) else -1
*/
#include<bits/stdc++.h>
using namespace std;

firstOccur(int arr[],int low,int high,int x)
{
	int res=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid] == x)
			{
				res=mid;
			high=mid-1;
			}
		else if(arr[mid] < x)
			high=mid-1;
	    else
			low=mid+1;
	}
	return res+1;
}

int bSearch(int arr[],int low,int high, int x)
{
	 // low, high initialized with O th and 1st position

	while(x>arr[high])
	{
		low=high;
		high*=2;
	}
	firstOccur(arr, low, high-1, x);
}
int main()
{
	int arr[]={0,0,0,0,0,1,1,1,1};
	cout<<bSearch(arr,0,1,1);
	return 0;
}
