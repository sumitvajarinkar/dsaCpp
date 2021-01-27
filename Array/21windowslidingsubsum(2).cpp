//window sliding method for all non negative no.
//Find if there is a subarray with given sum
//Approach 2
//O(n)

/*
ip : arr[] = {1 8 30 -5 20 7} sum = 45
o/p : Yes 
*/
#include<bits/stdc++.h>
using namespace std;
int issubsum(int arr[],int n,int sum)
{
    int curr_sum=arr[0],start=0;
    for(int end=1;end<n;end++)
    {

        while(curr_sum > sum && start<end-1 )
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum)
            cout<<"Yes";
        if(end<n)
            curr_sum+=arr[end];
    }
    cout<<"No";


}
int main()
{
     int n,sum;
    cin>>n;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    issubsum(arr,n,sum);
    return 0;
}

