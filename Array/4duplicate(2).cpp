//Remove duplicates from sorted Array
//Approach 2
// O(n) O(1)->No extra(space) array

#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n)
{
  int res=1;
  for(int i=1;i<n;i++)
//if next element is not equal to previous then skip it

  	{
  		if(arr[i]!=arr[res-1])  //compare 1st element with 0th
  			{
  				arr[res]=arr[i];	//if not equal then then skip it
  				res++;
			  }
	  }
	  return res;
}
int main()
{
    int n,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=duplicate(arr,n);
    cout<<"size is "<<r<<endl;
    for(int i=0;i<r;i++)
    	cout<<arr[i]<<" ";
    return 0;
}
