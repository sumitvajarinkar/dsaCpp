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
	cout<<"Enter the no. of elements:\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Index of largest element\n"<<getlargest(arr,n);

}
