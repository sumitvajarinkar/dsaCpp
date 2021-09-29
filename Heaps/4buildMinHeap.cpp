/// Min Heapify
///O(n log n)

#include <iostream>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. N is size of heap
void minHeapify(int arr[], int n, int i)


{
    int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2
    int smallest = i;

    if (l < n && arr[l] < arr[i])
        smallest = l;

    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(arr,n,smallest);
    }
}

// Function to build a Max-Heap from the given array
void buildHeap(int arr[], int n)
{
	for (int i = (n-2)/2;i>=0;i--) {
		minHeapify(arr, n, i);
	}
}

// A utility function to print the array
// representation of Heap
void printHeap(int arr[], int n)
{
	cout << "Array representation of Min Heap is:\n";

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
	//			1
	//		 /	 \
	//     4     2
	//	 / \	 / \
	//  9	7   14 20
	// / \
	// 13 10

	return 0;
}
