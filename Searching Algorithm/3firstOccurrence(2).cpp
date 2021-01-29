/*Index of First occurence
Approach 1
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
		if(arr[mid] > x) //X 
			high=mid-1;		
		else if(arr[mid < x])
			low=mid+1;
	    else
		{
			if(mid == 0 || arr[mid-1] != arr[mid])
				return mid;						  //if mid is 1st occurence
			else
				high=mid-1; 
			//here we want 1st occurenece, obiviously we will go for left side
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
