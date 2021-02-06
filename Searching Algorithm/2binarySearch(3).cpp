/*i/p : arr[]:{10,20,30,40,50,60} x=20
o/p : 1(index of x)
O(log n) O(1)*/

#include<bits/stdc++.h>
using namespace std;

binarySearch(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2); //To avoid array out of bound
		if(arr[mid] == x)    //X at middle
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
