///Longest Common Subsequence Memoization
/*

i/p:
x: abcdgh
y: abedfhr


o/p:4 (abdh)

substring is continuous
subsequence is not continuous
*/

#include<bits/stdc++.h>
using namespace std;

int LCSMemoize(string x, string y, int m, int n)
{
	int t[m+1][n+1];
	memset(t, -1, sizeof(t));
	// base case
	if (n == 0 || m == 0)
		t[m][n]=0;

	if(t[m][n] != -1)
		return t[m][n];
	//if last char same
    if(x[m-1] == y[n-1])
    {
        t[m][n]= 1 + LCSMemoize(x,y,m-1,n-1);
    }
	//if last char not same choose max
    else
    {
        t[m][n]= max(LCSMemoize(x,y,m,n-1),
				LCSMemoize(x,y,m-1,n));
    }
return t[m][n];
}

int main()
{
    string x,y;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    cout<<"Count of common subsequence is "<<LCSMemoize(x,y,m,n);
}

