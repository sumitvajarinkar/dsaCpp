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
///0-1 Knapsack problem - Recursion
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

///Recursion
int knapSackRec(int wt[], int val[], int cap,int n)
{
    //base case
    if(n==0 || cap==0)
        return 0;

//if sack is empty
    if(wt[n-1] <= cap)
    {
        return max(val[n-1]+knapSackRec(wt,val,cap-wt[n-1],n-1),
                   knapSackRec(wt,val,cap,n-1));
    }
//if sack is full
    else if(wt[n-1] > cap)
    {
        return knapSackRec(wt,val,cap,n-1);
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
cout<<"Maximum profit is "<<knapSackRec(wt,val,cap,n);

}
