//Left rotate an Array by D
//O(nD) O(1)
//approach 1

//we simply call leftrotatebyone for D times

#include<bits/stdc++.h>
using namespace std;

void leftrotatebyone(int arr[],int n)
{
    int temp=arr[0];        //store 0th element in temp
    for(int i=1;i<n;i++)
         {
         	arr[i-1]=arr[i];   //move other element back bye one
		 } 
       arr[n-1]=temp;        //insert temp element at end
}

void leftrotatebyD(int arr[],int n,int d)
{
	for(int i=0;i<d;i++)
		leftrotatebyone(arr,n);
}

int main()
{
    int n,d;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    leftrotatebyD(arr,n,d);
      for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
