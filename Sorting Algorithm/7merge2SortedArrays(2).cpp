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
		/*
		1 3 5 7
		|///
		5 7 8 9 10

		1 3 5 5 7
		sorted but still remain some elements
		7 8 9 10 will print by next while loop
		*/

		//if array a element small ++
		if(a[i]<=b[j])
		{
			cout<<a[i]<<" "; //cout<<a[i++]<<" ";
			i++;
		}
		//if array b element small ++
		else
		{
			cout<<b[j]<<" ";
			j++;
		}
	}
	//to print remaining elements - check is i reached till m or not
	while(i<m)
	{
		cout<<a[i]<<" ";
			i++;
	}
	//to print remaining elements - check is j reached till n or not
	while(j<n)
	{
			cout<<b[j]<<" ";
			j++;
	}
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
