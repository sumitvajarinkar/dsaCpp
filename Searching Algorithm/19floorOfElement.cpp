//Find floor of an element in a sorted array
/*
i/p : 1 2 3 4 8 10 10 12 19 X=5
o/p : 4(Greatest element smaller than 5 that is 4)
*/

#include<bits/stdc++.h>
using namespace std;

floorOfElement(int arr[],int n,int x)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)
			return mid;

		//as go in right side then it will get bigger element (floor)
		else if(arr[mid] < x)
			{
				res=arr[mid];  //this is change only
				low=mid+1;
			}
		else
			{
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
	cout<<"Floor element is "<<floorOfElement(arr,n,x);
	return 0;
}

