///Unbounded Knapsack problem - Top Down Approach
/*

i/p:
n=4
wt[]=1,3,3,5
val[]=1,4,5,7
cap=7

o/p:11
*/

#include<bits/stdc++.h>
using namespace std;

///Top down
/*
So we have used memoization method then why we need Top Down approach:
1. Top Down has no recursive call it is iterative solution
2. No use of stack
3. No stackoverflow
*/

int knapSackTopDown(int wt[], int val[], int cap, int n)
{
//matrix
    int t[n+1][cap+1];
//base condition === initialization
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<cap+1; j++)
        {
        	//base case
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
            //if sack is empty
            else if(wt[i-1] <= j)
            {
            	//compare curr & previous for max value
                t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],
							t[i-1][j]);
            }
            //if sack is full
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    //we get max profit at right bottom corner [n][n] box
    return t[n][cap];
}

int main()
{
    int n,cap;
    cout<<"Enter number of pairs\n";
    cin>>n;
    int wt[n],val[n];
    cout<<"Enter weight and value pairs\n";
    for(int i=0; i<n; i++)
        cin>>wt[i]>>val[i];
    cout<<"Capacity of sack\n";
    cin>>cap;
    cout<<"Maximum profit is "<<knapSackTopDown(wt,val,cap,n);
}


