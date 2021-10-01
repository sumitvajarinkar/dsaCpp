/// Sort a K-sorted array - Sort nearly Sorted array
//O(n log k)

//Naive approach would be sort and traverse took O(n log n)
//Better approach will be like only take k size and proceed O(n log k) using min heap

/*
i/p:n=6, arr[]=9,8,7,18,19,17, k=2
o/p:7,8,9,17,18,19

An element at index i will be parent between the index i-k to i+k in the sorted array
*/

#include <bits/stdc++.h>
using namespace std;

int sortKSorted(int arr[], int n, int k)
{
    // used min heap to find smallest element
    priority_queue<int, vector<int>, greater<int> > minh;

    //push 1st K element in min heap
    for(int i=0; i<=k; i++)
        minh.push(arr[i]);

    int index = 0;
    for (int i = k + 1; i < n; i++)
    {

        //insert minimum element in array
        arr[index++] = minh.top();
        //pop it from min heap
        minh.pop();
        //push k+ element in min heap
        minh.push(arr[i]);
    }

    //for k+ elements
    while (minh.empty() == false)
    {
        //insert minimum element in array
        arr[index++] = minh.top();
        //pop it from min heap
        minh.pop();
    }
}

int main()
{
    int n,k;
    cout<<"Enter no. of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter value of K ";
    cin>>k;
    sortKSorted(arr, n, k);
    cout << "Following is sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
