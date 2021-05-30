//Frequencies in a Sorted Array
//theta(n)

//for unsorted it will take O(nlogn[sorting])

//last element must have 1 or more than 1 occurrence
//if only 1 element present and (last != last-1) then print 1
/*

 i/p :1 1 2 2 3
 o/p:
		1 2
		2 2
		3 1
*/

#include<bits/stdc++.h>
using namespace std;
void printfreq(int arr[],int n)
{
	int freq=1,i=1;
	while(i<n)
	{
		while(i<n && arr[i] == arr[i-1])
		{
			freq++; i++;
		}
		cout<<arr[i-1]<<" "<<freq<<endl;
		i++;
		freq=1; //update freq after one element count
	}

	 //condition for if last item is not same as previous
	 // so its count must be one
	if(n==1 || arr[n-1]!=arr[n-2])
		cout<<arr[n-1]<<" "<<"1";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    printfreq(arr,n);
    return 0;
}

