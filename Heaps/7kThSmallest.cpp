///K-th Smallest element
//O(n log k)

//Naive approach would be sort and traverse took O(n log n)
//Better approach will be like only take k size and proceed O(n log k) using max heap
/*
i/p:n=6, arr[]=7,10,4,3,20,15, k=3
o/p:7
*/

#include<bits/stdc++.h>
using namespace std;

int kThSmallest(int arr[],int n,int k){

// used max heap to find smallest element
priority_queue<int>maxh;
for(int i=0;i<n;i++){
	maxh.push(arr[i]);

	//simply pop MAX element at top if size is > k
	if(maxh.size()>k){
		maxh.pop();
	}
}
return maxh.top();
}

int main(){

	int n,k;
	cout<<"Enter no. of elements ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter value of K ";
    cin>>k;
	cout<<kThSmallest(arr,n,k);
}
