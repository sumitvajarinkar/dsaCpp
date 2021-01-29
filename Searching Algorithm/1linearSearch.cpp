//Linear search
//O(n) O(1)

/*
We iterate through array if we get Element equal to X return its index
*/
#include<bits/stdc++.h>
using namespace std;

linearSearch(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			return i;
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
	cout<<"At the index of "<<linearSearch(arr,n,x);
	return 0;
}
