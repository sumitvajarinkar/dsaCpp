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
				for(int j=i+1;j<n;j++)
					if(arr[j]!=0)		//if non zero then swap with ith 0
					{
							swap(arr[i],arr[j]); //and swap both
							break;
					}
			}
	}
}
/*
5
0 0 1 2 3
1 0 0 2 3
1 2 0 0 3
1 2 3 0 0
*/

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
