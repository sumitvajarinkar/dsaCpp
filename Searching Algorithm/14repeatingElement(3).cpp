//Repeating element
//Approach 1
//O(n) O(1)
/*
Array size n>=2
only 1 element can repeat many times
from 0 to max(arr)

i/p : 0 2 1 3 2 2
o/p : 2
*/
#include <bits/stdc++.h> 
using namespace std;
int repeat(int arr[], int n)
{
	int slow = arr[0]+1, fast = arr[0]+1;

	do{
		slow = arr[slow]+1;
		fast = arr[arr[fast]+1]+1;
	
	}while(slow != fast);
	
	slow = arr[0]+1;

	while(slow != fast)
	{
		slow = arr[slow]+1;
		fast = arr[fast]+1;
	}
	return slow-1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<repeat(arr,n);
	return 0;
}
