//Longest sub array with equal 0's & 1's
//Approach 1
//O(n^2) O(1)

//i/p: n=7, 1 0 1 1 1 0 0
//o/p: 6(1st to last index)

#include<bits/stdc++.h>
using namespace std;
int subArrayEqualZeroOnes(int arr[],int n){
int res=0;
for(int i=0;i<n;i++){
	int c0=0,c1=0;
	for(int j=i;j<n;j++){
		if(arr[j]==0)
			c0++;			//Count of 0
		else
			c1++;			//Count of 1
		if(c0==c1)
			res=max(res,c0+c1);
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
    cout<<"Size of equal zero & ones is "<<subArrayEqualZeroOnes(arr,n);
    return 0;

}
