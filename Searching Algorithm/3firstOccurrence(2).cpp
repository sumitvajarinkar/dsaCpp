/*Index of First occurrence
Approach 2
O(log n) O(1) - Here iterative Binary search we used
				Data must be sorted

i/p : arr[] :{1,10,10,10,20,20,40} x=20
o/p : 4 (20 is at index 4 which is first occur in given array
*/

#include<bits/stdc++.h>
using namespace std;

firstOccur(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] > x)
			high=mid-1;
		else if(arr[mid < x])
			low=mid+1;
	    else
		{
			//if mid is 1st occurrence

			//1st condition : if that arr[mid]==0, then its 1st element of
			//array and also 1st occurrence itself.

			//2nd condition : check is arr[mid-1] != arr[mid] then return
			//arr[mid] as first occurrence.

			if(mid == 0 || arr[mid-1] != arr[mid])
				return mid;						  //if mid is 1st occurrence

			//here we want 1st occurrence, obviously we will go for left side
			else
				high=mid-1;
		}
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
	cout<<"First occurence at the index of "<<firstOccur(arr,n,x);
	return 0;
}
