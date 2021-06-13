//Search in an infinite Sorted Array (Unbounded Binary Search)
//Approach 1
//O(position) O(1)
/*
i/p : arr[]={1,10,15,20,40,80,90,100,120,500,...} x=100
o/p : 7 (index of 100) else -1
*/
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int x)
{
	int i=0;
	while(true)
	{
		if(arr[i]==x)
			return i;
		if(arr[i]>x)
		    return -1;
		i++;
	}
	return -1;
}
int main()
{
	int x;
	int arr[]={1,10,15,20,40,80,90,100,120,500};
	
	cout<<"{1,10,15,20,40,80,90,100,120,500}\nEnter searching element\n";
	cin>>x;
	cout<<search(arr,x);
	return 0;
}
