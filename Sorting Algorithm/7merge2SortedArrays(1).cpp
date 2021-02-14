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
	int c[m+n];
	for(int i=0;i<m;i++)
		c[i]=a[i];
	for(int i=0;i<n;i++)
		c[m+i]=b[i];
	sort(c,c+m+n);
	for(int i=0;i<(m+n);i++)
		cout<<c[i]<<" ";
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
