///Rod cutting - Unbounded KnapSack
/*
i/p:
n=8 means length[]=1,2,3,4,5,6,7,8
price[]=1 5 8 9 10 17 17 20

o/p:

*/
#include<bits/stdc++.h>
using namespace std;

int rodCutting(int length[],int price[], int n, int l){
    int t[n + 1][l + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= l; j++)
            if (j == 0 || i == 0)
                t[i][j] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= l; j++)


            if (length[i - 1] <= j)
            {
                t[i][j] = max(price[i - 1] + t[i][j - length[i - 1]],
                              t[i - 1][j]);
            }
            else
                t[i][j] = t[i - 1][j];
        }

    return t[n][l];
}

int main()
{
    int n,l;
    cout<<"Enter length of rod\n";
    cin>>n;
    cout<<"Enter length for a unit\n";
    int length[n];
    for(int i=0; i<n; i++)
        cin>>length[i];
    cout<<"Enter price for a unit\n";
    int price[n];
    for(int i=0; i<n; i++)
        cin>>price[i];
    l=sizeof(length)/sizeof(length[0]);
    cout<<"Profit is "<<rodCutting(length,price,n,l);

}

