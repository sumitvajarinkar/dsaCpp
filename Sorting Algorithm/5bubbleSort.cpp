//Bubble sort (neighbour if greater swap)
//O(n^2) O(1)

#include<iostream>
using namespace std;
/*
i/p : 22 64 90 11 25 34 12
o/p : 11 12 22 25 34 64 90
*/

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n; i++)       
  {
  	
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
         {
         	if(arr[j]>arr[j+1])   //if 1st element greater than 2nd swap and goes on
          	{ 
           	int temp = arr[j];
             arr[j]  = arr[j+1];
    	     arr[j+1]  = temp;
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
	bubbleSort(arr,n);
	printit(arr,n);
	
}

