#include<bits/stdc++.h>
using namespace std;

firstOccur(int arr[],int n,int x)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] == x)
			{
				res=mid;
			high=mid-1;
			}
		else if(arr[mid < x])
			high=mid-1;
	    else
			low=mid+1;
	}
	return res;
}

lastOccur(int arr[],int n,int x)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] == x)
			{
				res=mid;
				low=mid+1;
			}
		else if(arr[mid < x])
			low=mid+1;
	    else
			high=mid-1;
	}
	return res;
}

int countOcc(int arr[],int n,int x)
{
	int res =firstOccur(arr,n,x);
	if(res == -1)
		return -1;
	else
		return(lastOccur(arr,n,x)-res + 1);
}

int main()
{
		int n,x,op;
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
	cout<<countOcc(arr,n,x);
	return 0;
}
