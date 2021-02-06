//How many time is a sorted array rotated
//Search for index of min element it will give rotation of array
/*
i/p : 11 12 15 18 2 5 6 8
o/p : 4(# times array rotated)
*/
#include<bits/stdc++.h>
using namespace std;
int arrayRotated(int arr[],int n)
{
	if(arr[0] < arr[n-1]) //base condition
		return 0;
		
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		if(arr[low]<=arr[high])
			return low;
	
		int mid=low+(high-low)/2;
		//neighbours
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;
				
		if((arr[mid] <= arr[next]) && (arr[mid] <= arr[prev]))    
			{
				res=mid;
			break;
			}
		if(arr[low] <= arr[mid]) 
			low=mid+1;		
		else if(arr[high] >= arr[mid])
			high=mid-1;
		}
	return res;
}
int main()
{
	
	int n;
	cout<<"Enter no. of element \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array rotated by "<<arrayRotated(arr,n)<<" times";
	return 0;
}
