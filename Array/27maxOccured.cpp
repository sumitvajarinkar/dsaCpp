/*

Given n integer ranges, the task is to find the maximum occurring integer in these ranges.
If more than one such integer exits, find the smallest one. The ranges are given as two arrays L[] and R[].
L[i] consists of starting point of range and R[i] consists of corresponding end point of the range.

n = 4
L[] = {1,4,3,1}
R[] = {15,8,5,4}
Output: 4
Explanation: The given ranges are [1,15]
 [4, 8] [3, 5] [1, 4]. The number that
is most common or appears most times in
the ranges is 4.
*/


#include<bits/stdc++.h>
using namespace std;

int maxOccured(int L[], int R[], int n, int maxx){

          int arr[maxx] = {0};

    for(int i = 0; i < n; i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }

    int maxi = arr[0], res = 0;
    for(int i = 1; i < maxx; i++)
    {
        arr[i] += arr[i-1];

        if(maxi < arr[i])
        {
            maxi = arr[i];
            res = i;
        }
    }

    return res;

    }

int main(){
int n;
cin>>n;
int L[n];
int R[n];
int maxx=0;
for(int i=0;i<n;i++)
{
    cin>>L[i];
}for(int i=0;i<n;i++)
{
    cin>>R[i];
    if(R[i]>maxx)
    {
        maxx=R[i];
    }
}
cout<<"Missing number is "<<maxOccured(L,R,n,maxx);

return 0;
}
