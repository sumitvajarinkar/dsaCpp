// Median of Two sorted arrays
//O(log(max(m,n))) O(1)
/*
Input:
m = 5, n = 6
arr[] = {1,2,3,4,5}
brr[] = {3,4,5,6,7,8}
Output: 4
Explanation: After merging two arrays,
elements will be as 1 2 3 3 4 4 5 5 6 7 8
So, median is 4.
*/

#include<bits/stdc++.h>
using namespace std;

int medianTwoSortedArrays(int arr1[],int arr2[],int m,int n){
	if(n<m)
		return medianTwoSortedArrays(arr2,arr1,n,m);
	int low=0,high=n;

	while(low<=high){
		int cut1=(low+high)/2;
		int cut2=(m+n+1)/2-cut1;

		int left1=cut1==0? INT_MIN : arr1[cut1-1];
		int left2=cut2==0? INT_MIN : arr2[cut2-1];

		int right1=cut1==m? INT_MAX : arr1[cut1];
		int right2=cut2==n? INT_MAX : arr2[cut2];

		if(left1 <= right2 && left2 <= right1){
			if((m+n)%2==0)
				return(max(left1,left2) + min(right1,right2))/2;
			else
				return max(left1,left2);
		}
		else if(left1 > right2){
			high=cut1-1;
		}
		else{
			low=cut1+1;
		}
	}
	return 0;
}

int main(){
int m,n;
cout<<"Enter no. of elements of 2 arrays\n";
cin>>m>>n;
int arr1[m],arr2[n];
for(int i=0;i<m;i++){
	cin>>arr1[i];
}
for(int i=0;i<n;i++){
	cin>>arr2[i];
}
cout<<"Median is "<<medianTwoSortedArrays(arr1,arr2,m,n);
return 0;

}
