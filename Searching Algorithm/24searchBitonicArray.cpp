//Search an element in Bitonic Array
//Approach 1 : O(n) - linear search as usual
//Approach 2 : O(log n)
/*
monotonic : 5 6 7 8 9 11 (arr[i] != arr[i+1]
bitonic : 3 4 6 10 7 2 (increase -> peak -> decrease

i/p : arr[]={1 3 8 12 7 2} x=7
o/p : 7 (index of 7)
here we use peak logic and 2 time BS
1 BS for ascending another for descending
*/

#include<bits/stdc++.h>
using namespace std;
int descending(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)    //X at middle
			return mid;
		else if(arr[mid] > x) //X
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
int ascending(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+((high-low)/2); //To avoid array out of bound
		if(arr[mid] == x)    //X at middle
			return mid;
		else if(arr[mid] > x) //X
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int getPeak(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(mid>0 && mid<n-1)
		{
			if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
				return mid;
			else if(arr[mid-1] >arr[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		// for 1st 2 element
		else if(mid == 0)
		{
			if(arr[0]>arr[1])
				return 0;
			else
				return 1;
		}
		//for last 2 element
		else if(mid == n-1)
		{
			if(arr[n-1]>arr[n-2])
				return n-1;
			else
				return n-2;
		}

	}
	//it will never return -1 because anyone will be peak from all.
}
btonicSearch(int arr[],int n,int x)
{
	int index=getPeak(arr,n);
	int asc=ascending(arr,0,index-1,x);
	if(asc>=0)
		return asc;
	else
		descending(arr,index,n-1,x);

}
int main()
{
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>x;
	cout<<btonicSearch(arr,n,x);
	return 0;
}
