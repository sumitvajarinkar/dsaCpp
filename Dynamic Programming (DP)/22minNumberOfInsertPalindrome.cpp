
/// Minimum number of insertion in a string to make it Palindrome
// same as deletion :)

/*
i/p:
x: acbcbda

o/p:2 (acdbcbdca)

x=acbcbda
y=adbcbca (reverse of a)

LCS(x,y) = abcba (5) => longest palindrome subsequence(LPS)

x.length()=7

now x.length() - LPS = 7 - 5 => 2 (Min number of insertion to make palindrome)
*/
#include<bits/stdc++.h>
using namespace std;

int LCSTopDown(string x, string y, int m, int n)
{
    int t[m+1][n+1];

    // initialisation
    for(int i=0; i<m+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
        }
    }

    for(int i=1; i<m+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
//if last char same
            if(x[i-1] == y[j-1])
            {
                t[i][j]= 1 + t[i-1][j-1];
            }
//if last char not same choose max
            else
            {
                t[i][j]= max(t[i][j-1], t[i-1][j]);
            }
        }
    }
	return t[m][n];
}

int minNumberInsertPalindrome(string x,int m){

string y=x;
//reverse of x

reverse(y.begin(),y.end());
int n=y.length();

//LCS of x,y
int LPS = LCSTopDown(x,y,m,n);

//return with original - LPS
return m-LPS;

}

int main()
{
    string x;
    cout<<"Enter a string\n";
    cin>>x;
    int m;
    m=x.length();
    cout<<"Minimum number of insertion to get palindrome is "<<minNumberInsertPalindrome(x,m);
}
