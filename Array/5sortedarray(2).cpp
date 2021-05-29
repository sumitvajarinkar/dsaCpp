// Check if Array is Sorted
// approach 2
//O(n)

#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
	for(int i=0;i<n;i++)
			{
				if(arr[i-1]>arr[i])
					return false;
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

