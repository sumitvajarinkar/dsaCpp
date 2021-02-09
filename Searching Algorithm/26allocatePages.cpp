//Allocate Pages of Books
//Lajwaab problem
/*
i/p : 10 20 30 40 k: 2
o/p :60
*/
#include<bits/stdc++.h>
using namespace std;
bool isValid(int arr[],int n,int k,int mid)
{
	int student=1;
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=arr[i];
		if(s>mid)
		{
			student++;
			s=arr[i];
		}
			if(student>k)
				return false;
	}
	return true;
}

int allocatePages(int arr[],int n,int k)
{
	if(n<k)  		//base case
		return -1;
	
	//max element	
	int mx=arr[0];
	for(int i=1;i<n;i++)
	{
		if(mx<arr[i])
			mx=arr[i];
	}
	int low=mx;
	
	//Sum of array element
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	int high=sum;
	
	int res=-1;
	while(low<=high)
	{
		int mid=low + (high-low)/2;
		
		if(isValid(arr,n,k,mid)==true)
		{
			res=mid;
			high=mid-1;
		}
		else
			low=mid+1;
	}
}

int main()
{
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>k;

	cout<<allocatePages(arr,n,k);
	
}
