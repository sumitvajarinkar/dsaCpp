//Maximum Circular Subarray Sum
//Approach 2
//O(n)

//Circular subarray :
/*
	arr[]={10,5,-5}
	normal : 10,5,-5,(10,5),(5,-5),(10,-5,5)
	only circular : (5,-5,10), (-5,10), (-5,10,5)
	so it can be anyone both of above
*/
#include<bits/stdc++.h>
using namespace std;
int maxsumsubarraykadane(int arr[],int n)
{
  int res=arr[0];
 int maxend=arr[0];
 for(int i=1;i<n;i++)
 {
     maxend=max(maxend+arr[i],arr[i]);
     res=max(res,maxend);
 }
 return res;
}

int maxcircularsubarray(int arr[],int n)
{
    int max_normal=maxsumsubarraykadane(arr,n);
    if(max_normal<0)
        return max_normal;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+maxsumsubarraykadane(arr,n);
    return max(max_normal,max_circular);

}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
   cout<<maxcircularsubarray(arr,n);

}
