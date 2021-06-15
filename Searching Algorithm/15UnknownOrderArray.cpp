//Order is unknown ascending/descending sorted array
// (order agnostic binary search)
//give input as ascending or descending


#include<bits/stdc++.h>
using namespace std;

// 2 4 8 23 78
ascending(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)
			return mid;
		else if(arr[mid] > x) //X at left
			high=mid-1;
		else
			low=mid+1; //X at right
	}
	return -1;
}

// 56 32 21 13 5
descending(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)    //X at middle
			return mid;
		else if(arr[mid] > x) //X at right
			low=mid+1;
		else
			high=mid-1;//X at left
	}
	return -1;
}

int unknown(int arr[],int n, int x)
{
	if(arr[0] < arr[1])
		ascending(arr,n,x);
	else
		descending(arr,n,x);
}
int main()
{
	int n,x;
	cout<<"Enter no. of element \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter searching element\n";
	cin>>x;
	cout<<"At the index of "<<unknown(arr,n,x);
	return 0;
}
