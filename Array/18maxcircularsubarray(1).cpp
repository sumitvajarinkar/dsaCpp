//Maximum Circular Subarray Sum
//Approach 1
//O(n^2) O(1)

//Circular subarray :
/*
	arr[]={10,5,-5}
	normal : 10,5,-5,(10,5),(5,-5),(10,-5,5)
	only circular : (5,-5,10), (-5,10), (-5,10,5)
	so it can be anyone both of above
*/


#include<bits/stdc++.h>
using namespace std;
int maxcircularsubarray(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max=arr[i];
        int curr_sum=arr[i];
        	for(int j=1;j<n;j++)
       		 {
           		 int index=(i+j)%n;   //give circular index - modulo arithmetic
            	 curr_sum+=arr[index];
            	 curr_max=max(curr_max,curr_sum);
        	}
        res=max(res,curr_max);
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
    cout<<maxcircularsubarray(arr,n);
    return 0;
}

