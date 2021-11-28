///Sequence Pattern Matching
//Is x is subsequence of y

/*

i/p:
x:axy
y:adxcpy

o/p:true

x=axy
y=adxcpy
m=3
y=6

LCS = 3
m==LCS
true

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

bool sequencePatternMatch(string x, string y, int m, int n){
//LCS
int LCS=LCSTopDown(x, y, m, n);


if(LCS==x.length())
	return 1;
else
	return 0;

}

int main(){
string x,y;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    cout<<"Is sequence pattern matching "<<sequencePatternMatch(x,y,m,n);
}
