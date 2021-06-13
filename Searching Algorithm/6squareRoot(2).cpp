//Square root
//Approach 2
//O(log n) O(1)

/*
i/p: 4 o/p : 2
i/p: 15  o/p: 3 (floor of i/p)
*/

#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n)
{
	int low=1,high=n,ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int msq=mid*mid;
		if(msq==n)
			return mid;
		else if(msq > n)
			high=mid-1;
		else
		{
			low=mid+1;
			ans=mid;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<squareRoot(n);
}
