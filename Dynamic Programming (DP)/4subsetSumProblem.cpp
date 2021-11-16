///Subset Sum Problem
/*
i/p:
	arr[]:2 3 7 8 10
	sum=11
o/p:
	Yes
i/p:
	arr[]:2 3 7 8 10
	sum=6
o/p:
	No
*/

#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int n,int sum)
{

//matrix
    bool t[n+1][sum+1]; //changing variable with i and j
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
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
                if(arr[i-1] <= j)

                    //max(2,3)=3
                    //max replace with OR (||) will get always TRUE
                    //t || f = t, 0 || 1 =1

                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
}

int main(){
        int n,sum;
        cout<<"Enter no. of element in arrays ";
        cin>>n;
        int arr[n];
        cout<<"Enter elements in arrays ";
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<"Enter sum ";
        cin>>sum;
        if(subsetSum(arr,n,sum))
            cout<<"Yes, it is subset";
        else
            cout<<"No, it is not subset";
}
