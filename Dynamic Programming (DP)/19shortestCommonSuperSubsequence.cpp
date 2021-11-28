/// Shortest Common Super Sequence.
/*
i/p:
x: geek
y: eke

o/p:5 (geeke)

i/p:
x: AGGTAB
y: GXTXAYB

o/p:9 (AGGXTXAYB)

m=6, n=7, LCS=4 (GTAB)

(m+n)-LCS = (6+7)-4 = 9
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

int shortestCommonSuperSubsequence(string x, string y, int m, int n){
int LCS=LCSTopDown(x,y,m,n);
return (m+n)-LCS;
}

int main()
{
    string x,y;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    cout<<"Shortest Common Super Subsequence is "<<shortestCommonSuperSubsequence(x,y,m,n);
}

