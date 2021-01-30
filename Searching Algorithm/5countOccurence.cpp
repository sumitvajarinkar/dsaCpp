//Count occurence in a sorted array 
//Efficient approach O(log n) - iterative Binary search
//Naive approach is Linear Search O(n) O(1)

/*
i/p : arr[]:{10,20,20,20,30,30} x=20
o/p : 3
*/


#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == 0 || arr[mid - 1] != arr[mid])
				return mid;

			else
				high = mid - 1;
		}

	}

	return -1;
}

int lastOcc(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == n - 1 || arr[mid + 1] != arr[mid])
				return mid;

			else
				low = mid + 1;
		}

	}

	return -1;
}

int countOcc(int arr[], int n, int x)
{
	int first = firstOcc(arr, n, x);

	if(first == -1)
		return 0;
	else 
		return lastOcc(arr, n, x) - first + 1;
}
int main()
{
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>x;
	cout<<countOcc(arr,n,x);
	return 0;
}
