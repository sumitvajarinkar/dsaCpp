//Repeating element
//Approach 1
//O(n) O(n)
/*
Array size n>=2
only 1 element can repeat many times
from 0 to max(arr)

i/p : 0 2 1 3 2 2
o/p : 2
*/

#include<bits/stdc++.h>
using namespace std;
int repeating(int arr,int n)
{
	bool visit[n];
	
	memset(visit, false, sizeof(visit)); //all false
	
	for(int i = 0; i < n; i++)
	{
		if(visit[arr[i]])
			return arr[i];
		visit[arr[i]] = true;
	}

	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<repeating(arr,n);
	return 0;
}

