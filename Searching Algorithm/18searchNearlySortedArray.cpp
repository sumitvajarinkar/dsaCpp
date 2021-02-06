//Searching element in a nearly sorted array
/*
i/p : 5 10 30 20 40 x=40
o/p : 4(index of 40)

nearly sorted means i-1,i,i+1 only this position may be violetedof Sorted array
*/

#include<bits/stdc++.h>
using namespace std;

searchNearlySortedArray(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);		
		if(arr[mid] == x)    
			return mid;
			
		else if(mid-1 >= low && arr[mid-1] == x) //mid-1 array out of bound
			return mid-1;		
		else if(mid+1 <= high && arr[mid+1] == x) //mid+1 array out of bound
			return mid+1;
		else if(arr[mid] < x)
			 low=mid+2;
		else if(arr[mid] > x)
			high=mid-2;
	}
	return -1;
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
	cout<<"At the index of "<<searchNearlySortedArray(arr,n,x);
	return 0;
}

