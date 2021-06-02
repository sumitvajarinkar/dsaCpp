//maximum Sum subarray - Kadane's Algorithm
// Approach 2
// O(n) O(1)

//This is Kadane's Algorithm- Must have one positve no. in array to apply this algo

//Subarray means:
/*
must contigious
{1,2,3} : {1},{2},{3},{1,2},{2,3},1,2,3}
*/
#include<bits/stdc++.h>
using namespace std;
int maxsumsubarraykadane(int arr[],int n)
{
 int res=arr[0];
 int maxend=arr[0];
 for(int i=1;i<n;i++)
 {
 	//main logic - take 2 maxend res variables initialize with arr[0]
 	//run loop from 1 to n-1, find max of (arr[0] + arr[1],arr[1]) and go on.
 	//store it in maxend variable and update it through res max(res,maxend)

     maxend=max(maxend+arr[i],arr[i]);
     res=max(res,maxend);
 }
 return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxsumsubarraykadane(arr,n);
    return 0;
}

