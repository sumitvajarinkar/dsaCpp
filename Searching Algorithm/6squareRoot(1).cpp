//Square root
//Approach 1
//O(root X)
/*
i/p: 4 o/p : 2
i/p: 15  o/p: 3 (fllor of i/p
*/
#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n)
{
	int i;
	while(i*i<=n)
		i++;
	return(i-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<squareRoot(n);
}
