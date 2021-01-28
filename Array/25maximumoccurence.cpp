//Given n ranges, find maximum appearing element in the ranges.
//O(n) O(1)
/*
i/p : l[] :{1,2,3} r[] : {3,5,7}
o/p : 3(3 appears 3times)
*/

#include<bits/stdc++.h>
using namespace std;
int maxOcc(int l[], int r[], int n)
{	
    	int arr[1000];
    	
    	memset(arr, 0, sizeof(arr)); //to set all values of array 0 zero

    	for(int i = 0; i < n; i++)
    	{
    		arr[l[i]]++;

    		arr[r[i] + 1]--;
    	}

    	int maxm = arr[0], res = 0;

    	for(int i = 1; i < 1000; i++)
    	{
    		arr[i] += arr[i - 1];

    		if(maxm < arr[i])
    		{
    			maxm = arr[i];

    			res = i;
    		}
    	}

    	return res;
}
int main()
{
	int n;
	cin>>n;
	int l[n],r[n];
	for(int i=0;i<n;i++)
		cin>>l[i];
	for(int i=0;i<n;i++)
		cin>>r[i];
	cout<<maxOcc(l,r,n);
}
