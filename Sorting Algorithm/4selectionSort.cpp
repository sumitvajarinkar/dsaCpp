//Selection sort
//Find the minimum element in unsorted array and swap it with element at begining
//O(n^2) O(1)
//Not stable as bubble and Insertion sort
/*
i/p : 22 64 90 11 25 34 12
o/p : 11 12 22 25 34 64 90
*/
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		if(arr[j]<arr[i])
    		{
    			int temp=arr[j];
    			arr[j]=arr[i];		//swap
    			arr[i]=temp;
			}
		}
	}
}
void printit(int arr[],int n)
{
cout<<"\nSorting:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";	
}
int main()
{
	int n;
	cout<<"Enter the number of element :\n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements :\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Before sorting:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	selectionSort(arr,n);
	printit(arr,n);
	return 0;
}
