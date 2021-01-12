//Return index of second Largest element in Array
// approach 2
//O(n)

#include<iostream>
using namespace std;
int secondlargest(int arr[],int n)
{
	int res=-1,largest=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[largest]) // if ascending order as 5 8 12 20
		 	{
		 		res=largest;
		 		largest=i;
			 }
		 else if(arr[i]!=arr[largest])   // small value at end 12 12 12 7
			{
				if(res==-1 || arr[i]>arr[res]) // we ignore this 12 8 12 7
					res=i;					   // 12 7 12 9
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
	cout<<secondlargest(arr,n);	
	
}
