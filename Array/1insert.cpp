//Insert element and given position

#include<bits/stdc++.h>
using namespace std;
int inserted(int a[],int n,int x,int pos,int cap)
{
	if(n==cap)
		return n; 
	// if capacity is full and array cannot accomodate extra element
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
        a[i+1]=a[i];            // move element back
    a[idx]=x;		 // and insert given element at moved position
   	return n+1;
}
int main()
{
    int n,x,pos,cap;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;
    cin>>pos;
	cin>>cap;
    inserted(a,n,x,pos,cap);
    for(int i=0;i<n+1;i++)
    cout<<a[i]<<" ";
    return 0;
}
