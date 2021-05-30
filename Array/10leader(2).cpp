//Leader in an Array
//Approach 2
// O(n) O(1)

//here we traverse from last element which is leader itself because last element is always leader
// but will print o/p in reverse

#include<bits/stdc++.h>
using namespace std;
int leader(int arr[],int n)
{
    int curr_leader=arr[n-1];
	cout<<curr_leader<<" ";   //print last

    for(int i=n-2;i>=0;i--) // traverse from second last element to 0th
    {
        if(curr_leader<arr[i])
        {
            curr_leader=arr[i];  //keep track of large element save in curr_leader
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

