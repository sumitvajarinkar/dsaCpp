///Longest Common Substring
/*
i/p:
x: abcde
y: abfce

o/p:2 (ab)

substring is continuous
subsequence is not continuous

*/
#include<bits/stdc++.h>
using namespace std;

int LCSubstring(string x,string y,int m, int n)
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
//if last char not same then 0
            else
            {
                t[i][j]= 0;
            }
        }
    }
	int mx = 0;
	for (int i = 0; i < m+1; i++){
		for (int j = 0; j < n+1; j++){
			mx = max(mx, t[i][j]);
		}
	}
	return mx;
}

int main()
{
    string x,y;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    cout<<"Count of common substring is "<<LCSubstring(x,y,m,n);
}
