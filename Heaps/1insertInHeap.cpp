///Heaps - insert in Heap
/*
Min heap : Highest priority item assigned with lowest value
Max heap : Highest priority item assigned with highest value

This is Binary Min Heap
arr[]=10 20 30 40 50 60
Representation :

				10[0]
			   /	  \
		    20[1]     30[2]
		    /   \     /
	   40[3]  50[4]  60[5]

left(i)=2(i)+1
right(i)=2(i)+2
parent(i)=floor(i-1)/2

Rules:
1. Should be complete binary tree

This is not min heap.(Not filling value from left)
				10[0]
			   /	  \
		    20[1]     30[2]
		    /   \        \
	   40[3]  50[4]     60[5]
2. Every node has value smaller than its descendants
   20,30 is descendants of 10


   i/p: arr[]=60,50,40,30,20 key=35
   o/p: 60 50 40 30 20 35
*/


#include<iostream>
using namespace std;
#define MAX 1000

///Heapify

void heapify(int arr[],int n,int i)
{
	int parent=(i-1)/2;

	if(parent >= 0)
	{
		//current node > parent swap
		if(arr[i] > arr[parent])
		{
			swap(arr[i],arr[parent]);

			heapify(arr,n,parent);		//recursive
		}
	}
}

///Insert
void insert(int arr[],int &n,int key)
{
	n=n+1; //increase size of heap to insert new

	arr[n-1]=key; //insert new element at end which not violet heap

	heapify(arr,n,n-1);
}

printarray(int arr[],int n)
{
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";

}
int main()
{

	/*Tree is

				60
			 /	  \
			50	  40
		  /   \
	 	30	  20
	*/
	int arr[MAX]={60,50,40,30,20};

	int n=5;
	int key;
	cout<<"Enter any value in 60,50,40,30,20\n";
	cout<<"Enter new key to add\n";
	cin>>key;
	insert(arr,n,key);
	printarray(arr, n);

	/*
	70 50 60 30 20 40
	key=70
				70
			 /	  \
			50	  60
		  /   \    /
	 	30	  20  40
	*/
	return 0;



}
