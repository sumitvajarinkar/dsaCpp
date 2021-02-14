//Merge 2 sorted arrays
//Approach 2
//O(m+n) O(1)
/*
i/p: a[]={10,15,20} b[]={5,6,6,15}
o/p: 5 6 6 10 15 15 20
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int b[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]<=b[j])
		{
			cout<<a[i]<<" "; //cout<<a[i++]<<" ";
			i++;
		}
		else
		{
			cout<<b[j]<<" ";
			j++;
		}
	}
	while(i<m)
	{
		cout<<a[i]<<" ";
			i++;
	}
	while(j<n)
	{
			cout<<b[j]<<" ";
			j++;
	}
}
int main()
{
	int m,n;
	int a[m],b[n];
	cout<<"Enter M no. of elements:\n";
	cin>>m;
	cout<<"Enter elements:\n";
	for(int i=0;i<m;i++)
		cin>>a[i];
	cout<<"Enter N no. of elements:\n";
	cin>>n;
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++)
		cin>>b[i];
	merge(a,b,m,n);
	return 0;
}
