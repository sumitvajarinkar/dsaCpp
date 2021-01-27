//Majority elements (greater than (>) n/2)
//Approach 2
//O(n)

/*
i/p : arr[]={8,3,4,8,8} n=5
o/p : 8
*/


#include<bits/stdc++.h>
using namespace std;
int findmajority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
        else
            count--;
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
        if(arr[res]==arr[i])
        count++;
    if(count<=n/2)
        res=-1;
    return arr[res];
    
//    striver approach

}
int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findmajority(arr,n);
    return 0;
}
