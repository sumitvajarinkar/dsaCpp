//Sub array with zero sum  (sub-array-contiguous)
//Approach 1
//O(n^2) O(1)

//i/p: n=6, 1,4,13,-3,-10,5
//o/p: true(13,-3,-10)

#include<bits/stdc++.h>
using namespace std;
bool subArrayZeroSum(int arr[],int n){
for(int i=0;i<n;i++){
	int curr_sum=0;
	for(int j=i;j<n;j++){
		curr_sum+=arr[j];
		if(curr_sum==0)
			return true;
	}
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
