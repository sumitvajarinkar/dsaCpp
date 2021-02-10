//Insertion sort sort (neighbour if greater swap)
//O(n^2) O(1)

#include<iostream>
using namespace std;
/*
i/p : 22 64 90 11 25 34 12
o/p : 11 12 22 25 34 64 90
*/

void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
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
	insertionSort(arr,n);
	printit(arr,n);
	
}

