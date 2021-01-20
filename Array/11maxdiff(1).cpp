// Maximum Difference (j>i)
//Approach 1
//O(n^2) O(1)

// It takes 2 loop i & j res=max(res,a[j]-a[i];

#include<bits/stdc++.h>
using namespace std;

int maxdiff(int arr[],int n)
{
	int res = arr[1]-arr[0]; //take this 1st difference
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			res=max(res,(arr[j]-arr[i])); //will find which is max compare to 1st
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
    cout<<maxdiff(arr,n);
    return 0;
}


