/// Minimum number of insertion and deletion

/*
i/p:
x: heap
y: pea

op: 1(insert) 2(delete)

		heap     pea
	     \      /
2 delete  \    / 1 insert
(hp)       \  /   (p)
            ea
	   pea     heap
	     \      /
1 delete  \    / 2 insert
(p)        \  /   (hp)
            ea

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

pair<int,int>minInsertDelete(string x, string y, int m, int n){
int LCS=LCSTopDown(x,y,m,n);

//insert and delete from x to y
int insertion,deletion;
deletion=m-LCS;
insertion=n-LCS;

return make_pair(insertion,deletion);

}
int main()
{
    string x,y;
    pair<int,int>p;
    cout<<"Enter 2 strings\n";
    cin>>x>>y;
    int m,n;
    m=x.length();
    n=y.length();
    p=minInsertDelete(x,y,m,n);
    cout<<"Need to insert "<<p.first<<" and delete "<<p.second;
}

