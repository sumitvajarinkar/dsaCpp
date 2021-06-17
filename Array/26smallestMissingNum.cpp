//Missing number

/*
Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing
number is 2.
*/

#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n)
{
    // to sort
    for(int i=0;i<n;i++)
    {
        while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1])
        {
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    //after sorting
    for(int i=0;i<n;i++)
    {
        if(i+1!=arr[i])
        return i+1;
    }
    return n+1;
    }
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Missing number is "<<missingNumber(arr,n);
}
