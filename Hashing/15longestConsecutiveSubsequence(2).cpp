//Longest Consecutive Subsequence
//Approach 2
//O(n) O(n)

//i/p: n=6, arr=1 9 3 4 2 20
//o/p: 4(1,2,3,4)
//x,x+1,x+2,x+3 - Consecutive subsequence

#include<bits/stdc++.h>
using namespace std;
int longestSubsequence(int arr[],int n){
    unordered_set<int>h(arr,arr+n);
    int res=1;
    for(auto x:h){
		if(h.find(x-1)==h.end()){
			int curr=1;
			while(h.find(x+curr)!=h.end()){
				curr++;
			}
			res=max(res,curr);
		}
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"longest Consecutive Subsequence is "<<longestSubsequence(arr,n);
    return 0;

}

