/*Index of First occurence
Approach 1
O(log n) O(log n) - here we used recursive binary search
					Data must be sorted
i/p : arr[] :{1,10,10,10,20,20,40} x=20
o/p : 4 (20 is at index 4 which is first occur in given array
*/

#include<bits/stdc++.h>
using namespace std;

firstOccur(int arr[],int low,int high,int x)
{
	if(low > high)
		return -1;
	int mid = (low + high)/2;
	if(arr[mid] > x)
		return firstOccur(arr,low,mid-1,x);
	else if(arr[mid] < x)
		return firstOccur(arr,mid+1,high,x);
	else
		{
			if(mid == 0 || arr[mid-1] != arr[mid])
				return mid;						//if mid is 1st occurence
			else
			return firstOccur(arr,low,mid-1,x); 
			//here we want 1st occurenece, obiviously we will go for left side
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
	cout<<"First occurence at the index of "<<firstOccur(arr,0,n-1,x);
	return 0;
}
