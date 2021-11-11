///DP - Dynamic Programming
/*
  DP is enhanced Recursion.
  In recursion we call for every node, that is repeatative calls,
  but in DP we store that repeatative calls in table that is DP.

  IMP STEP :

  Recursion + storage (Memoization or Top Down)

  DP can be achieve by :
  1.Memoization
  2.Top down approach

  How to identify DP :
  1.Choice : if needs 2 functions calls overlapping
  2.Optimal : min,max,largest,smallest (problem contain those words)

*/
///0-1 Knapsack problem - Memoization
/*
 3 types of knapsack :
   1.Fractional knapsack : solved using Greedy - take fractional item
   2.0-1 knapsack : DP - take whole item
   3.Unbounded knapsack :DP - take multiple items


i/p:
n=4
wt[]=1,3,4,5
val[]=1,4,5,7
cap=7

o/p:9
*/

#include<bits/stdc++.h>
using namespace std;


///Memoization
/*
1.Need to create matrix of values that change like cap and n.
2.Initialize it with -1
3.Base case
4.
*/
int knapSackMemoize(int wt[], int val[], int cap,int n)
{
//matrix
    int t[n+1][cap+1];
//matrix fill with -1
    memset(t,-1,sizeof(t));

//base case
    if(n==0 || cap==0)
        return 0;
//if we get result which saved in matrix return it instead of recursive call
    if(t[n][cap] != -1)
        return t[n][cap];

	//if sack is empty
    if(wt[n-1] <= cap)
    {
    	//compare curr & previous for max price
        return t[n][cap]=
                   max(val[n-1]+knapSackMemoize(wt,val,cap-wt[n-1],n-1),
                       knapSackMemoize(wt,val,cap,n-1));
    }
    //if sack is full
    else if(wt[n-1] > cap)
    {
        return t[n][cap]=(wt,val,cap,n-1);
    }
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

    cout<<"Maximum profit is "<<knapSackMemoize(wt,val,cap,n);

}

