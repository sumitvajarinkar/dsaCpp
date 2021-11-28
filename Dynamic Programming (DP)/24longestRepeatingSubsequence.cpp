/// Longest Repeating Subsequence

/*

x: aabebcdd
o/p: 3 (abd)

*/
#include<bits/stdc++.h>
using namespace std;

int longestRepeatingSubsequence(string x, string y, int m, int n){
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
            if(x[i-1] == y[j-1] && i != j)
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

int main(){
string x;
cin>>x;
int m,n;
m=n=x.length();
cout<<"Count of Longest Repeating Subsequence is "<<longestRepeatingSubsequence(x,x,m,n);

}