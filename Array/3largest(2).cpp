// Return index of Largest element in Array
// approach 2
//O(n)


#include<iostream>
using namespace std;
getlargest(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	 if(arr[i]>arr[res])
	   res=i;
	return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<getlargest(arr,n);
}
