//Return index of second Largest element in Array
// approach 1
//O(n^2)

#include<iostream>
using namespace std;
getlargest(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	 if(arr[i]>arr[res])
	   res=i;
	return res;
}

secondlargest(int arr[],int n)
{
	int largest=getlargest(arr,n);
	int res=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[largest])
		{
			if(res==-1)
			   res=i;
			else if(arr[i]>arr[res])
				res=i;
		}
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<secondlargest(arr,n);	
	
}
