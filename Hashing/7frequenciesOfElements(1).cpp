//Count the Frequencies of Elements
//Approach 1
//O(n^2) O(n)

//i/p: n=5, 10 11 10 12 11
//o/p: 10-2 11-2 12-1

#include<bits/stdc++.h>
using namespace std;

void countFrequencies(int arr[],int n)
{
//check if seen before
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=0; j<i; j++)
			if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
		//if seen same element
        int freq=1;
        if(flag==true)
            continue;
		//if not seen before, count freq
        for(int j=i+1; j<n; j++)
			if(arr[i]==arr[j])
				freq++;
	cout<<arr[i]<<" - "<<freq<<endl;
}
}
int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    countFrequencies(arr,n);
    return 0;

}
