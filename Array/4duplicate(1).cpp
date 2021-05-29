//Remove duplicates from sorted Array
//Approach 1
// O(n) O(n)->extra temp array

#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n)
{
   int temp[n];  //extra temp array
   temp[0]=arr[0]; //will copy 1st element
   int res=1;
   for(int i=1;i<n;i++)
    //if next element is not equal to previous then we will insert it in Extra temp array
    if(temp[res-1]!=arr[i])	 //compare it with main array
   {
       temp[res]=arr[i];     //if not equal then put in temp
       res++;
    }
    for(int i=0;i<res;i++)
    arr[i]=temp[i];			//to return array we insert
							//it again in main array

    return res;
}
int main()
{
    int n,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=duplicate(arr,n);
    cout<<"size is "<<r<<endl;
    for(int i=0;i<r;i++)
    	cout<<arr[i]<<" ";
    return 0;
}
