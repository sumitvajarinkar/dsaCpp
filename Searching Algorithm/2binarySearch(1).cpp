/*Searching Algorithms
Binary search : Iterative - O(log n) O(1) Data must be sorted

1. Sequential search : Linear search - O(n)
2. Interval search : Binary search - O(log n)- data must be sorted - decrease and conquer
Binary search : 1. Iterative - O(log n) O(1)
				2. Recursive - O(log n) O(log n)

i/p : arr[]:{10,20,30,40,50,60} x=20
o/p : 1(index of x)
O(log n) O(1)

Explaination :
		      Here, suppose we have 7 element we divide it by 2 so it gives 3
if our X element is less than element at the index of 3 then we iterate in left side.(mid > x) By, High=mid-1.
if our X element is greater than element at the index of 3 then we iterate in right side.(mid < x) By, low=mid+1.
	if element is present at 3 index then we return it
	else return -1 if not found	
*/

#include<bits/stdc++.h>
using namespace std;

binarySearch(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] == x)     //X at middle
			return mid;
		else if(arr[mid] > x) //X 
			high=mid-1;		
		else
			low=mid+1;
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
	cout<<"At the index of "<<binarySearch(arr,n,x);
	return 0;
}

