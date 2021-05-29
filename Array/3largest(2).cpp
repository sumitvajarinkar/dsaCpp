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
	cout<<"Enter the no. of elements:\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Index of largest element\n"<<getlargest(arr,n);

}
