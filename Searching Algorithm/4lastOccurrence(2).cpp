/*Index of Last occurrence
Approach 2
O(log n) O(1) - Here iterative Binary search we used
				Data must be sorted

i/p : arr[] :{1,10,10,10,20,20,40} x=10
o/p : 3 (10 is at index 4 which is last occur in given array)
*/

#include<bits/stdc++.h>
using namespace std;

lastOccur(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] > x) //X is less iterate in right
			high=mid-1;
		else if(arr[mid] < x) //X is greater iterate in left
			low=mid+1;
	    else
		{
			//if mid is 1st occurrence

			//1st condition : if that arr[mid]==n-1, then this element in array
			//is last occurrence itself.

			//2nd condition : check is arr[mid] != arr[mid+1] then return
			//arr[mid] as first occurrence.

			if(mid==n-1 || arr[mid] != arr[mid+1])
				return mid;						  //if mid is last occurrence
			else
				low=mid+1;
			//here we want last occurrence, obviously we will go for right side
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
	cout<<"Last occurence at the index of "<<lastOccur(arr,n,x);
	return 0;
}
