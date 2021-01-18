//Move all zeros to End
//Approach 1
//O(n^2) O(1)


#include<iostream>
using namespace std;
void MoveToEnd(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)				//so we 1st find is there any 0 present
			{
				
				for(int j=i+1;j<n;j++) //if we get 0
					if(arr[j]!=0)		//then we go to send nonzero element
					{
							swap(arr[i],arr[j]); //and swap both
							break;
					}
			}
	}
}
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
