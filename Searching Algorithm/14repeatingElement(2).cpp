//Repeating element
//Approach 1
//O(n) O(1)
/*
Array size n>=2
only 1 element can repeat many times
from 1 to max(arr) (for 0 to max(arr) see Approach 3)

i/p : 0 2 1 3 2 2
o/p : 2
*/

#include <bits/stdc++.h> 
using namespace std;
int repeat(int arr[], int n)
{
	int slow = arr[0], fast = arr[0];

	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	
	}while(slow != fast);
	
	slow = arr[0];

	while(slow != fast)
	{
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
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


