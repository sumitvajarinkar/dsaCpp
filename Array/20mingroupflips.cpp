//Minimum group flips to make same
//O(n)
/*
i/p : arr[]=[ 1 1 0 0 0 1 1 1 0 0 1]
o/p : from 2 to 4
	  from 8 to 9


Intuition:
          2 possibilities,

          Group count differ by one:
          counts : 0-:2 ; 1-:3

          1 1 0 0 0 1 1 1 0 0 1
          counts : 0-:3 ; 1-:2
          0 0 1 1 0 0 0 1 1 0 0
    **********************************
          group count are same
          counts : 0-:2 ; 1-:2

          0 0 1 1 1 0 0 0 0 1 1
          counts : 0-:2 ; 1-:2
          1 1 0 0 0 0 1 1 1 1 0

          We always flip 2nd group.
*/

#include<bits/stdc++.h>
using namespace std;

int mingrp(int arr[],int n)
{
  for(int i=1;i<n;i++)
    {
    if(arr[i]!=arr[i-1])
//don't see equal see which is unequal down to up approach
     {
        if(arr[i]!=arr[0])
            cout<<"From "<<i<<" to ";
        else
            cout<<(i-1)<<endl;
     }
    }
    //condition for last element
    if(arr[n-1]!=arr[0])
        cout<<n-1<<endl;
}
int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mingrp(arr,n);
    return 0;
}
