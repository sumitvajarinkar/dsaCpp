//Return index of second Largest element in Array
// approach 2
//O(n) needs 1 traversal only

#include<iostream>
using namespace std;
int secondlargest(int arr[],int n)
{
	//res is secondlargest
	//largest  is largest
	int res=-1,largest=0;
	for(int i=1;i<n;i++)
	{
		//if random order 32 11 19 50
		// if ascending order(large value at end) as 5 8 12 20
		if(arr[i]>arr[largest])
		 	{
		 		res=largest;
		 		largest=i;
			 }
			 // if descending order(small value at end) 12 12 12 7
		 else if(arr[i]!=arr[largest])
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
