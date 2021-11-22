///Coin change I - maximum number of way
/*

i/p: n=3
arr[]=1,2,3
sum=5

o/p: 5 [(2,3)(1,1,1,1,1)(2,2,1)(1,1,3)(1,1,1,2)]

here we can use multiple coins to get given sum.
count the ways that can get given sum.

we have to add included and excluded ways so this unbounded knapsack type problem


*/

#include<bits/stdc++.h>
using namespace std;

int coinChange1(int arr[],int n, int sum)
{

    int t[n+1][sum+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
    	//in i row sum is 0
            if(i==0)
            {
                t[i][j]=0;
            }
    	//in j column sum is 0 1 2 3....
            if(j==0)
            {
                t[i][j]=1;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sum; j++)
        {
        	//if element < sum
            if(arr[i-1] <= j)
            {
            	// add count of all ways prev + next
                t[i][j]=t[i-1][j] + t[i][j-arr[i-1]];
            }

        	//if element > sum
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main()
{
    int n,sum;
    cout<<"Enter the no. of elements in array\n";
    cin>>n;
    cout<<"Enter elements in array\n";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter sum\n";
    cin>>sum;
    cout<<"Number of ways are "<<coinChange1(arr,n,sum);
}
