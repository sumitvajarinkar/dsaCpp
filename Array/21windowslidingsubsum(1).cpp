//window sliding method for all non negative no.
//Find if there is a subarray with given sum
//Approach 1
//O(n^2)

/*
ip : arr[] = {1 8 30 -5 20 7} sum = 45
o/p : Yes (30+(-5)+20)
*/
#include<bits/stdc++.h>
using namespace std;
int issubsum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
    	int curr_sum=0;
    	for(int j=0;j<n;j++)
    	{
    		curr_sum+=arr[i];
    			if(curr_sum == sum)
    				cout<<"Yes";
		}
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

