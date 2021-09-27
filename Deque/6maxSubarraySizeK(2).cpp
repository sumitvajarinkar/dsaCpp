//Maximum in all Subarrays of size K
//Approach 2
//O(n) O(k)

/*
i/p: arr[]={10,8,5,12,15,7,6}, k=3
o/p: 10 12 15 15 15 (10 8 5 max is 10 likewise)

10,8,5,12,15,7,6

i=0 dq: 10
i=1 dq: 10 8
i=2 dq: 10 8 5, 10(max)
i=3 dq: 12      dq-8,5-12(max)
i=4 dq: 15      dq-12-15(max)
i=5 dq: 15 7    15(max)
i=6 dq: 15 7 6  15(max)

*/

#include<bits/stdc++.h>
using namespace std;

void printMaxK(int arr[], int n, int k)
{
    deque<int> dq(k);

    // Process first k (or first window) elements of array
    for (int i = 0; i < k; i++)
    {
        // For every element, the previous smaller elements are useless so
        // remove them from dq
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back(); // Remove from rear

        // Add new element at rear of queue
        dq.push_back(i);
    }

    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for (int i=k; i < n; i++)
    {
        // The element at the front of the queue is the largest element of
        // previous window, so print it
        cout << arr[dq.front()] << " ";

        // Remove the elements which are out of this window
        while ((!dq.empty()) && dq.front() <= i - k)
            dq.pop_front(); // Remove from front of queue

        // Remove all elements smaller than the currently
        // being added element (remove useless elements)
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();

        // Add current element at the rear of dq
        dq.push_back(i);
    }

    // Print the maximum element of last window
    cout << arr[dq.front()];
}

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>k;
    printMaxK(a,n,k);
}

