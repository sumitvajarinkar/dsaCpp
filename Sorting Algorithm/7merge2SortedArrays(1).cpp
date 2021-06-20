//Merge 2 sorted arrays
//Approach 1
//O((m+n)*log(m+n)) O(m+n)
/*
i/p: a[]={10,15,20} b[]={5,6,6,15}
o/p: 5 6 6 10 15 15 20
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int b[],int m,int n)
{
	int c[m+n];  		//took m+n extra array

	for(int i=0;i<m;i++)//move array a in extra array
		c[i]=a[i];

	for(int i=0;i<n;i++)//move array b in extra+m
		c[m+i]=b[i];

	sort(c,c+m+n);		//sort m+n array (m+n log m+n)

	for(int i=0;i<(m+n);i++)
		cout<<c[i]<<" ";
}

int main()
{
	int m,n;
	cout<<"Enter M no. of elements:\n";
	cin>>m;
	int a[m];
	cout<<"Enter elements:\n";
	for(int i=0;i<m;i++)
		cin>>a[i];
	cout<<"Enter N no. of elements:\n";
	cin>>n;
	int b[n];
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++)
		cin>>b[i];
	merge(a,b,m,n);
	return 0;
}
