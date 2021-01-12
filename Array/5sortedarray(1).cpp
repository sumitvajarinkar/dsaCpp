// Check if Array is Sorted
// approach 1
//O(n^2)

#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
			{
				if(arr[j]<arr[i])
					return false;
			}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(sorted(arr,n)==true)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;	
}

