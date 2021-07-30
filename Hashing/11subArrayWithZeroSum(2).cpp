//Sub array with zero sum (sub-array-contiguous)
//Approach 2
//O(n) O(n)

//i/p: n=6, 1,4,13,-3,-10,5
//o/p: true(13,-3,-10)
/*
In above 3 elements prefix sum is 0 at 13 -3 -10
on 5 we get 15 as prefix sum (15+0 =15) 15 is already in set.So, we get zero sum ;D
(pre_sum2 + 0 = pre_sum1 :: 15 + 0 = 15)
*/

#include<bits/stdc++.h>
using namespace std;
bool subArrayZeroSum(int arr[],int n){
unordered_set<int>h;
int pre_sum=0;
for(int i=0;i<n;i++){
	pre_sum+=arr[i];
	//so, here we check is there any prefix sum in set present or not - main trick
	if(h.find(pre_sum) !=h.end())
		return true;
	//if 0th starting element having sum 0
	if(pre_sum==0)
		return true;
	//insert every pre_sum
	h.insert(pre_sum);
}
return false;
}
int main(){
int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<subArrayZeroSum(arr,n);
    return 0;

}

