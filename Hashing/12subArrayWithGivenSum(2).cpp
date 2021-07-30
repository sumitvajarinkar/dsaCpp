//Sub Array with given sum (sub-array-contiguous)
//Approach 2
//O(n) O(n)

//i/p: n=4, 5,3,2,-1, sum=4
//o/p: true(3,2,-1)

/*
In above 3 elements prefix sum is 4 at 3,2,-1
on -1 we get 9 as prefix sum (9-4 =5) 5 is already in set.So, we get result ;D
(pre_sum2 - sum = pre_sum1 :: 9-4 =5)
*/
#include<bits/stdc++.h>
using namespace std;
bool subArrayGivenSum(int arr[],int n,int sum)
{
    unordered_set<int>h;
    int pre_sum=0;
    for(int i=0; i<n; i++)
    {
        pre_sum+=arr[i];
        if(h.find(pre_sum-sum)!=h.end())
            return true;
        //if 0th starting element having sum 0
        if((pre_sum)==sum)
            return true;
        //insert every pre_sum
        h.insert(pre_sum);
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
