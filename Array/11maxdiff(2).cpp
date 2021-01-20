// Maximum Difference (j>i)
//Approach 1
//O(n) O(1)


#include<bits/stdc++.h>
using namespace std;
//o(n)
int maxdiff(int a[],int n)
{
 int res=arr[1]-a[0],minval=a[0]; //1st difference & min value
 for(int j=0;j<n;j++)
       {
         res=max(res,arr[j]-minval); //subtract every element with min value
        minval=min(minval,arr[j]); //also check for if min value is or not to update it
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
    cout<<maxdiff(arr,n);
    return 0;
}

