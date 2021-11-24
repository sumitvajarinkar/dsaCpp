
///Longest Common Subsequence Recursion
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

int LCSRecursion(string x, string y, int m, int n)
{
	// base case
	if (n == 0 || m == 0)
		return 0;
	//if last char same
    if(x[m-1] == y[n-1])
    {
        return 1+ LCSRecursion(x,y,m-1,n-1);
    }
	//if last char not same choose max
    else
    {
        return max(LCSRecursion(x,y,m,n-1),
				LCSRecursion(x,y,m-1,n));
    }

}

int main()
{
    string x,y;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    cout<<"Count of common subsequence is "<<LCSRecursion(x,y,m,n);
}
