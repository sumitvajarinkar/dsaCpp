//Minimum group flips to make same
//O(n)
/*
i/p : arr[]=[ 1 1 0 0 0 1 1 1 0 0 1]
o/p : from 2 to 4
	  from 8 to 9
*/

#include<bits/stdc++.h>
using namespace std;

int mingrp(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
            if(arr[i]!=arr[i-1])
//dont see equal see which is unequal down to up approch
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
