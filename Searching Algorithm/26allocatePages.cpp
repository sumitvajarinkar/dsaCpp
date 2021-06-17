//Allocate Pages of Books
//O(n log n) O(1)
/*
i/p : 10 20 30 40 k: 2
o/p :60

We have to allocate above books pages to 2 students
such as
1.A book allocate to student (no split of pages)
2.Each student must get at least 1 book (no one remain without book)
3.Allocation must be contiguous(10 20 30 for 1st student
								40 for 2nd student)
Approach :
Given : Maximum no. of pages can be allocated is minimum
case 1:
		10(10) | 20 30 40 (90) => max(10,90) =>90
case 2:
		10 20(30) | 30 40 (70) => max(30,70) =>70
case 3:
		10 20 30(60) | 40 (40) => max(60,40) =>60

		from(90,70,60) minimum is 60.
*/
#include<bits/stdc++.h>
using namespace std;


bool isValid(int arr[],int n,int k,int barrier)
{
	int student=1;
	int pages=0;

	for(int i=0;i<n;i++)
	{
		pages+=arr[i];
		if(pages>barrier)
		{
			student++;
			pages=arr[i];
		}
			if(student>k)
				return false;
	}
	return true;
}

int allocatePages(int arr[],int n,int k)
{
	if(n<k)  		//base case
		return -1;

	//O(n)
	//max element
	int mn=arr[0];
	for(int i=1;i<n;i++)
	{
		if(mn>arr[i])
			mn=arr[i];
	}
	int low=mn; //low

	//O(n)
	//Sum of array element
	int sum=0;
	for(int i=0;i<n;i++)
		{
			sum+=arr[i];
		}
	int high=sum; //high

	//BS O(log n)
	int res=-1;
	while(low<=high)
	{
		int mid=low + (high-low)/2;

		if(isValid(arr,n,k,mid)==true)
		{
			res=mid;
			high=mid-1;
		}
		else
			low=mid+1;
	}
}

int main()
{
	int n,k;
	cout<<"Enter the no. of elements:\n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter value of students\n";
	cin>>k;

	cout<<allocatePages(arr,n,k);

}
