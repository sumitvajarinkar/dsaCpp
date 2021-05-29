//Move all zeros to End
//Approach 2
//O(n) O(1)


#include<iostream>
using namespace std;
void MoveToEnd(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]); //if we get 0 we ignore it
			count++;				 //and if we get non zero we swap with count
									// which point at 0
		}
	}
}

// Here we replace another loop with count

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	  cin>>arr[i];
	MoveToEnd(arr,n);
	for(i=0;i<n;i++)
	  cout<<arr[i]<<" ";

}
