//Leader in an Array
//Approach 1
// O(n) 

//here we traverse from last element which is leader itself
//will print o/p in reverse

#include<bits/stdc++.h>
using namespace std;
int leader(int arr[],int n)
{
    int curr_leader=arr[n-1];
	cout<<curr_leader<<" ";   //print last
    
    for(int i=n-2;i>=0;i--)
    {
        if(curr_leader<arr[i])
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    } 
}
int main()
{
       int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	leader(arr,n);
    return 0;
}

