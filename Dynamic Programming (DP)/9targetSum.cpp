///Target Sum (Count the Number of Subset with Given Sum)
/*
i/p: n=4, arr=1 1 2 3, sum=1
o/p: 3

Basically we have to add + or - sign to each element to get sum equal to given sum

if you see it closely you'll get this same problem as count subset with given sumerence
sumerence === sum here

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

int countSubsetWithsum(int arr[],int n,int givenSum){
int sumOfArray=accumulate(arr,arr+n,sumOfArray);
int sum = (givenSum+sumOfArray)/2;
return countSubsetSum(arr,n,sum);
}

int main(){
int n,givenSum;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements in array\n";
for(int i=0;i<n;i++)
	cin>>arr[i];
cout<<"Enter sum\n";
cin>>givenSum;
cout<<"Count of subset with given "<<givenSum<<" sum is "<<countSubsetWithsum(arr,n,givenSum);
}
