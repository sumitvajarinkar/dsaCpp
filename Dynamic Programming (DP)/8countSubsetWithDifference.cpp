/// Count the Number of Subset with Given difference
/*
i/p: n=4, arr=1 1 2 3, diff:1
o/p: 3 [(1+2)-(1+3),(1+1+2)-(3),(3+1)-(2+1)]

s1-s2=given diff-----1
s1+s2=sum of arr-----2

add 1 & 2

2(s1)= given diff + sum of arr
  s1 = (given diff + sum of arr)/ 2
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

int countSubsetWithDifference(int arr[],int n,int diff){
int sumOfArray=accumulate(arr,arr+n,sumOfArray);
int sum = (diff+sumOfArray)/2;
return countSubsetSum(arr,n,sum);
}

int main(){
int n,diff;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements in array\n";
for(int i=0;i<n;i++)
	cin>>arr[i];
cout<<"Enter difference\n";
cin>>diff;
cout<<"Count of subset with given "<<diff<<" difference is "<<countSubsetWithDifference(arr,n,diff);
}
