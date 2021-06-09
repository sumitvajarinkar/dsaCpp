//Count occurrence in a sorted array
//Approach 1 -Naive approach is Linear Search
//O(n) O(1)


#include<bits/stdc++.h>
using namespace std;

int countOcc(int arr[],int n,int x)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x){
			c++;
		}

	}
	return c;
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
	cout<<"Count is "<<countOcc(arr,n,x);
	return 0;
}
