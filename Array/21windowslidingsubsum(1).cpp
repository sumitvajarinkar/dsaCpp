//window sliding method for all non negative no.
//Find if there is a subarray with given sum
//Approach 1
//O(n^2)

/*
ip : arr[] = {1 8 30 20 7} sum = 58
o/p : Yes (8+30+20)
*/
#include<bits/stdc++.h>
using namespace std;
int issubsum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
    	int curr_sum=0;
    	for(int j=i;j<n;j++)
    	{
    		curr_sum+=arr[j];
    			if(curr_sum == sum)
    				return 1;
		}
	}
	return 0;
}
int main()
{
     int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
        	cin>>arr[i];
        }
    cin>>sum;
    cout<<issubsum(arr,n,sum);
    return 0;
}

