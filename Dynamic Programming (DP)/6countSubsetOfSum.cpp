///Count the Subsets of Given Sum
/*
i/p: n=6, arr[]=2 3 5 6 8 10, sum=10
o/p: 3 (2,3,5),(2,8) and (10)

Same as subset sum problem here we have sum

*/

#include<bits/stdc++.h>
using namespace std;

int countSubsetSum(int arr[],int n,int sum)
{

//matrix
    int t[n+1][sum+1];
    //initialization
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            //i row is false because of sum
            if(i==0)
                t[i][j]=false;
            //j column is true because of n(arr)
            if(j==0)
                t[i][j]=true;
        }
    }
    // taking from the 2nd row and 2nd column
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sum; j++)
        {
            //if element < sum add it
            if(arr[i-1] <= j)
                t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];

            //if element > sum keep sum as it is element--
            else
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}

int main()
{
    int n,sum;
    cout<<"Enter no. of element in arrays ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in arrays ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter sum ";
    cin>>sum;
    cout<<"Subset count is "<<countSubsetSum(arr,n,sum);

}
