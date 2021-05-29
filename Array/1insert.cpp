//Insert element and given position
//O(n) O(1)

/*
Why Array index starts with 0 ?
==>
When we try to access an element from Array then internally it uses this formula:

Base Address + Index*Sizeof(DataType);
e.g. :
int[] arr={7,3,5,6};

address : 100 104 108 112

For accessing 1st element :
100 + 1*Sizeof(int) = 100 + 4 = 104
Thus, we cannot access the first element in the array if the Array index starts from 1.

For accessing 0th element :
100 + 0*Sizeof(int) = 100 + 0 = 100
That's why Array index starts from 0.

*/

#include<bits/stdc++.h>
using namespace std;
int inserted(int a[],int n,int x,int pos,int cap)
{
	if(n==cap)
		return n;
	// if capacity is full and array cannot accomodate extra element
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
        a[i+1]=a[i];            // move element forward
    a[idx]=x;		 // and insert given element at moved position
   	return n+1;
}
int main()
{
    int n,x,pos,cap;
    cout<<"Enter no. of elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter no. you want to add\n";
    cin>>x;
    cout<<"Enter the position\n";
    cin>>pos;
    cout<<"Enter the capacity\n";
	cin>>cap;
    int r=inserted(a,n,x,pos,cap);
    if(r==n)
        cout<<"Same capacity, unable to add\n";
    else
        cout<<"Final array:\n"<<endl;
        for(int i=0;i<r;i++)
            cout<<a[i]<<" ";
    return 0;
}
