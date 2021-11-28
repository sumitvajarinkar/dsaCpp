/// Print Shortest Common Super Sequence
/*

i/p:
x: acbcf
y: abcdaf

o/p:acbcdaf

Table

//How to fill table
1. if row == col match then +1 in corner
2. else max of left-top

x: acbcf, y: abcdaf
m=5,      n=6

t[6][7]

	     a b c d a f
       0 1 2 3 4 5 6

 	0  0 0 0 0 0 0 0
 a	1  0 1 1 1 1 1 1
 c	2  0 1 1 2 2 2 2
 b	3  0 1 2 2 2 2 2
 c	4  0 1 2 3 3 3 3
 f	5  1 2 3 3 3 3 4

//TO print SCS
1.if letter matches i-- j-- in top left corner
2.not equal then take letter & move to max(left,top)

*/

#include<bits/stdc++.h>
using namespace std;

string printSCS(string x, string y, int m, int n)
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

//TO print SCS
//Now we will traverse till 0 from bottom
//if we get same letter
int i=m,j=n;
string str;
while(i>0 && j>0){

// if letter matches i-- j-- in top left corner
	if(x[i-1] == y[j-1]){
		str.push_back(x[i-1]);
		i--;
		j--;
	}

//not equal then take letter move to max(left,top)
	else{
		if(t[i][j-1] > t[i-1][j]){
				str.push_back(y[j-1]);
			j--;
		}
		else{
			str.push_back(x[i-1]);
			i--;
		}
	}
}
reverse(str.begin(),str.end());
return str;

}

int main()
{
    string x,y;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    cout<<"Shortest Common Super Sequence is "<<printSCS(x,y,m,n);
}

