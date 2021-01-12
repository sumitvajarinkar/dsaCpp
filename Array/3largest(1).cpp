//Return index of Largest element in Array
// approach 1
//O(n^2)

#include<iostream>
using namespace std;
int getlargest(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool flag=true;
		 for(int j=0;j<n;j++)
		 {
		 	if(arr[j]>arr[i])
		 	{
		 		flag=false;
		 		break;
			 }
		 }
		 if(flag==true)
		 return i;
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
	cout<<getlargest(arr,n);	
	
}
