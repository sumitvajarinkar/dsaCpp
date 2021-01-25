//Maximum length Even-Odd subarray
//Approach 2
//O(n)
//i/p: arr[]={10,12,14,7,8} o/p : 3
//14 7 8 are alternate even odd length is 3

#include<bits/stdc++.h>
using namespace std;
int maxevenodd(int arr[],int n)
{
  int res=1,curr=1;
  for(int i=1;i<n;i++)
  {
      if((arr[i]%2==0 && arr[i-1]%2!=0) ||
         (arr[i]%2!=0 && arr[i-1]%2==0))    //check previous and next of element is 
      {								        //even,odd or odd,even
          curr++;
          res=max(res,curr);
      }
      else
        curr=1;
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
    cout<<maxevenodd(arr,n);
    return 0;
}
