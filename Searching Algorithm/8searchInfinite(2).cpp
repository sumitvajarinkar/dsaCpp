//Search in an infinite Sorted Array (Unbounded Binary Search)
//Approach 1
//O(log position) O(1)
/*
i/p : arr[]={1,10,15,20,40,80,90,100,120,500,...} x=100
o/p : 7 (index of 100) else -1
*/
#include<bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return bSearch(arr, low, mid - 1, x);

	else
		return bSearch(arr, mid + 1, high, x);
}


int search(int arr[], int x)
{
    if(arr[0] == x) return 0;

	int i = 1;

	while(arr[i] < x)
		i = i * 2;

	if(arr[i] == x) return i;


	return bSearch(arr, i / 2 + 1, i - 1, x);
}

int main()
{
	int x;
	int arr[]={1,10,15,20,40,80,90,100,120,500};
	cout<<"{1,10,15,20,40,80,90,100,120,500}\nEnter searching element\n";
	cin>>x;
	cout<<search(arr,x);
	return 0;
}
