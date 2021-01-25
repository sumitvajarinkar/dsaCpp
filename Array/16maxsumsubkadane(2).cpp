//maximum Sum subarray
// Approach 2
// O(n) O(1)

//This is Kadane's Algorithm- Must have one positve no. in array to apply algo
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
     maxend=max(maxend+arr[i],arr[i]); //main logic
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

