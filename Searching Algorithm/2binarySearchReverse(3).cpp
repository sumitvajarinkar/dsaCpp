//reverse sorted array
//O(log n) O(1)
/*i/p : arr[]:{60,50,40,30,20,10} x=20
o/p : 4(index of x)
*/
#include<bits/stdc++.h>
using namespace std;

binarySearch(int arr[],int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)    //X at middle
			return mid;
		else if(arr[mid] > x) //X 
			low=mid+1;		
		else
			high=mid-1;
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
	cout<<"At the index of "<<binarySearch(arr,n,x);
	return 0;
}
