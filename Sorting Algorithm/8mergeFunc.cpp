//Merge function of Merge Sort
//O(n) O(n)
/*
i/p : a[]={10 15 20 11 30} l=0,m=2,h=4
o/p : 10 11 15 20 30
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int n,int low,int mid,int high)
{
	int n1=mid-low+1,n2=high-mid;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++)
		left[i]=arr[low+i];
	for(int j=0;j<n2;j++)
		right[j]=arr[mid+j+1];
		
	int i=0,j=0,k=low;	
	while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

int main()
{
	int n,low,mid,high;
	cout<<"Enter no. of elements:\n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter low, mid, high:\n";
	cin>>low>>mid>>high;
	merge(arr,n,low,mid,high);
}
