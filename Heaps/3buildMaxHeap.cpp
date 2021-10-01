///Max Heapify
///O(n log n)


//i/p: arr[]=4,10,2,13,7,14,20,1,9
//o/p:20 13 14 10 7 4 2 1 9


#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. N is size of heap
void maxHeapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		maxHeapify(arr, n, largest);
	}
}

// Function to build a Max-Heap from the given array
void buildHeap(int arr[], int n)
{

	for (int i = (n-2)/2;i>=0;i--) {
		maxHeapify(arr, n, i);
	}
}

// A utility function to print the array
// representation of Heap
void printHeap(int arr[], int n)
{
	cout << "Array representation of Max Heap is:\n";

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	/*
			   4
			 /	 \
	        10    2
		  / \	 / \
	     13 7   14 20
	    / \
	    1 9
	*/
	int arr[] = { 4,10,2,13,7,14,20,1,9 };


	int n = sizeof(arr) / sizeof(arr[0]);

	buildHeap(arr, n);

	printHeap(arr, n);

	// Final Min Heap:
	//		   20
	//		 /	 \
	//     13     14
	//	 / \	 / \
	//  10	7   4   2
	// / \
	// 1  9

	return 0;
}
