//Maximum consecutive 1's in a Binary Array
//Approach 2
//O(n) O(1)

#include<bits/stdc++.h>
using namespace std;
int maxconsecutiveones(int arr[],int n)
{
    int res=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)	//if we get 0, curr become 0
            curr=0;
        else
        {
        	curr++;  //if we get consecutive 1's we increment it
        	res=max(res,curr); //for maximum consecutive
		}
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


