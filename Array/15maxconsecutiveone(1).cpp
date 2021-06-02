//Maximum consecutive 1's in a Binary Array
//Approach 1
//O(n^2) O(1)

#include<bits/stdc++.h>
using namespace std;
int maxconsecutiveones(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++) //after loop terminating will go from next iteration
    {
       int curr=0;
        for(int j=i;j<n;j++) 
        {
       	 if(arr[j]==1) //if we get 1 in 1 loop we increment
       		curr++;
       	 else
       		break;    //if 0 get we break
	   }
	   res=max(res,curr);
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
    cout<<maxconsecutiveones(arr,n);
    return 0;
}


