/*Index of Last occurence
Approach 1
O(log n) O(log n) - here we used recursive binary search
					Data must be sorted
i/p : arr[] :{1,10,10,10,20,20,40} x=10
o/p : 3 (10 is at index 4 which is last occur in given array)
*/

#include<bits/stdc++.h>
using namespace std;

lastOccur(int arr[],int low,int high,int x,int n)
{
	if(low > high)
		return -1;
	int mid = (low + high)/2;
	if(arr[mid] > x)
		return lastOccur(arr,low,mid-1,x,n);
	else if(arr[mid] < x)
		return lastOccur(arr,mid+1,high,x,n);
	else
		{
			if(mid == n-1 || arr[mid] != arr[mid+1])
				return mid;						//if mid is last occurence
			else
			return lastOccur(arr,mid+1,high,x,n); 
			//here we want last occurenece, obiviously we will go for right side
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
	cout<<"Last occurence at the index of "<<lastOccur(arr,0,n-1,x,n);
	return 0;
}
