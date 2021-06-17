//Minimum Number in a sorted rotated array
//O(log n)

/*
N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
Output: 1
Explanation: The array is rotated
once anti-clockwise. So minimum
element is at last index (n-1)
which is 1.
*/

#include<bits/stdc++.h>
using namespace std;

 int minimumSortedRotatedArray(int arr[], int l, int h)
    {
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(arr[mid]<arr[mid-1] || h==l){
                return arr[mid];
            }
            else if(arr[mid]>arr[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Minimum element is "<<minimumSortedRotatedArray(arr,0,n-1);

    }
