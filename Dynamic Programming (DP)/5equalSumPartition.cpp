///Equal Sum partition
/*
i/p: n=4,arr[]=1 5 11 5
o/p:true [(1 5 5) and (11)]

if we want partition then the sum of array must be EVEN
if sum is ODD then there is No partition

if sum is EVEN then
 call for subsetSum

*/

#include<bits/stdc++.h>
using namespace std;

//to check sum/2 subset
bool subsetSum(int arr[],int n,int sum)
{

//matrix
    bool t[n+1][sum+1]; //changing variable with i and j
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            if(i==0)
                t[i][j]=false;
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

bool equalSumPartition(int arr[],int n){
//sum of whole array
long long int sum=0;
for(int i=0;i<n;i++)
	sum+=arr[i];

//If sum is EVEN
if(sum%2!=0)
	return 0;

//If sum is ODD call subset with sum/2
//if we get half subset then another must be there.
//so just check for half :)
else if(sum%2==0)
	return subsetSum(arr, n, sum/2);

}

int main(){
     int n;
        cout<<"Enter no. of element in arrays ";
        cin>>n;
        int arr[n];
        cout<<"Enter elements in arrays ";
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(equalSumPartition(arr,n))
            cout<<"Yes, it is equal sum partition";
        else
            cout<<"No, it is not equal sum partition";
}
