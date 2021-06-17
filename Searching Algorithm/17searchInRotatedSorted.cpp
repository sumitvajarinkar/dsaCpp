//Find element in a sorted rotated array
//O(log n)
/*
i/p : 11 12 15 18 2 5 6 8 X=2
o/p : 4(index of 2)
*/

#include<bits/stdc++.h>
using namespace std;
/*
int arrayRotated(int arr[],int n)
{
	if(arr[0] < arr[n-1]) //base condition
		return 0;

	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		if(arr[low]<=arr[high])
			return low;

		int mid=low+(high-low)/2;
		//neighbors
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;

		if((arr[mid] <= arr[next]) && (arr[mid] <= arr[prev]))
			{
				res=mid;
			break;
			}
		if(arr[low] <= arr[mid])
			low=mid+1;
		else if(arr[high] >= arr[mid])
			high=mid-1;
		}
	return res;
}

binarySearch(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+((high-low)/2);
		if(arr[mid] == x)     //X at middle
			return mid;
		else if(arr[mid] > x) //X at left
			high=mid-1;
		else				//X at right
			low=mid+1;
	}
	return -1;
}

int elementSearchRotated(int arr[],int n, int x)
{
	int ans;

	//11 12 15 18 2 5 6 8
	//4 index return
	//Check from which index rotation starts
	int index=arrayRotated(arr,n);

	//call from 0 th to rotated last index
	//11 12 15 18
	ans=binarySearch(arr,0,index-1,x);
	if(ans>=0)
		return ans;
	else

	//call from rotated last index to last index
	//2 5 6 8
	    return binarySearch(arr,index,n-1,x);
}
*/


int elementSearchRotated(int arr[],int n, int x){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid] == x)
			return mid;

		//left side sorted
		if(arr[low] <= arr[mid]){
			if(x >= arr[low] && x <= arr[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}

		//right side sorted
		else
		{
			if(x >= arr[mid] && x <=arr[high]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
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
	cout<<"At the index of "<<elementSearchRotated(arr,n,x);
	return 0;
}

