//Sub Array with given sum (sub-array-contiguous)
//Approach 1
//O(n^2) O(1)

//i/p: n=6, 5,8,6,13,3,-1, sum=22
//o/p: true(6,13,3)

#include<bits/stdc++.h>
using namespace std;
bool subArrayGivenSum(int arr[],int n,int sum)
{
    for(int i=0; i<n; i++)
    {
        int curr_sum=0;
        for(int j=i; j<n; j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==sum)
                return true;
        }
    }
    return false;
}
int main()
{
    int n,sum;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the sum\n";
        cin>>sum;
    cout<<subArrayGivenSum(arr,n,sum);
    return 0;

}
