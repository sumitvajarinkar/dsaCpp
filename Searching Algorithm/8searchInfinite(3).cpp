//Search in an infinite Sorted Array (Unbounded Binary Search)
//Approach 3
//O(n) O(1)
/*
i/p : arr[]={1,10,15,20,40,80,90,100,120,500,...} x=100
o/p : 7 (index of 100) else -1
*/
#include<bits/stdc++.h>
using namespace std;

binarySearch(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+((high-low)/2); //To avoid array out of bound
		if(arr[mid] == x)    //X at middle
			return mid;
		else if(arr[mid] > x) //X
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int bSearch(int arr[],int low,int high, int x)
{
	 // low, high initialized with O th and 1st position

	while(x>arr[high])
	{
		low=high;
		high*=2;
	}
	binarySearch(arr, low, high, x);
}

int main()
{
	int x;
	int arr[]={1,10,15,20,40,80,90,100,120,500};
	cout<<"{1,10,15,20,40,80,90,100,120,500}\nEnter searching element\n";
	cin>>x;
	cout<<bSearch(arr,0,1,x);
	return 0;
}
