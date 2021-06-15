//Find ceil of an element in a sorted array
/*
i/p : 1 2 3 4 8 10 10 12 19 x=5
o/p : 8(Smallest element greater than 5 that is 8)
*/

#include<bits/stdc++.h>
using namespace std;

ceilOfElement(int arr[],int n,int x)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)
			return mid;

		else if(arr[mid] < x)
			{
				low=mid+1;
			}
		//as go in left side then it will get smaller element (ceil)
		else
			{
				res=arr[mid];  //this is change only
				high=mid-1;
			}
	}
	return res;
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
	cout<<"Floor element is "<<ceilOfElement(arr,n,x);
	return 0;
}

