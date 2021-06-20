//Bubble sort
//Repeatedly swap two adjacent elements if they are in wrong order (l>=R)
//stable
//O(n^2) O(1)
// no. of iteration = no. of elements - 1
//take less iteration


#include<iostream>
using namespace std;
/*
i/p : 22 64 90 11 25 34 12
o/p : 11 12 22 25 34 64 90
*/

void bubbleSort(int arr[], int n)
{
   int count=1;
   while(count<n)
   {
   	for(int i=0;i<n-count;i++)
   	{
   		//at every last iteration store bigger element so n-count
   		if(arr[i]>arr[i+1])
   		{
   			int temp=arr[i];
   			arr[i]=arr[i+1];  //swap
   			arr[i+1]=temp;
		}
	}
   count++;
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
	bubbleSort(arr,n);
	printit(arr,n);
}

