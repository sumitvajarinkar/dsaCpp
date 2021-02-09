//Minimum difference element in a sorted array
/*
i/p : {4,6,10} x=7
o/p : 6(absolute difference between 6 & 7 is minimum than others)
*/

#include<bits/stdc++.h>
using namespace std;

int minimumDifference(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2); //To avoid array out of bound
		if(arr[mid] == x)    //absolute difference will be 0
			return arr[mid];
		else if(arr[mid] > x) 
			high=mid-1;		
		else
			low=mid+1;
	}
	if((abs(arr[low]-x))<(abs(arr[high]-x)))
		return arr[low];
	else
		return arr[high];
		
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
	cout<<"Enter deleting element\n";
	cin>>x;
	cout<<"Element is "<<minimumDifference(arr,n,x);
	return 0;
}
