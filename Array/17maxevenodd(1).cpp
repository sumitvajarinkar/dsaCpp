//Maximum length Even-Odd subarray
//14 7 8 are alternate even odd length is 3

//Approach 1
//O(n^2) O(1)

//i/p: arr[]={10,12,14,7,8} o/p : 3

#include<bits/stdc++.h>
using namespace std;
int maxevenodd(int arr[],int n)
{
  int res=1;
  for(int i=0;i<n;i++)
  {
  	int curr=1;
      for(int j=i+1;j<n;j++)
      {
      	if((arr[j]%2==0 && arr[j-1]%2!=0) || //check previous and next of element is
         (arr[j]%2!=0 && arr[j-1]%2==0))     //[even && odd or odd && even]
            curr++;
        else
            break;
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
    cout<<maxevenodd(arr,n);
    return 0;
}
