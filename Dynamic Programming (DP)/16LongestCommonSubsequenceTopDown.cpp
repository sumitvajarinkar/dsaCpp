///Longest Common Subsequence Top down
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
//if char same
            if(x[i-1] == y[j-1])
            {
                t[i][j]= 1 + t[i-1][j-1];
            }
//if char not same choose max
            else
            {
                t[i][j]= max(t[i][j-1], t[i-1][j]);
            }
        }
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
    cout<<"Count of longest common subsequence is "<<LCSTopDown(x,y,m,n);
}

