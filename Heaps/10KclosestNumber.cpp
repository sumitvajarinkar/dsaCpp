/// K Closest Numbers
//O(n log k)

/*
i/p:n=5, arr[]=5,6,7,8,9, k=3,x=7
o/p:6,7,8

Given a sorted integer array arr, two integers k and x, return the k closest
integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b

*/

#include<bits/stdc++.h>
using namespace std;

int KClosest(int arr[],int n,int k,int x){

// used pair
priority_queue<pair<int,int>>pq;
for(int i=0;i<n;i++){
	pq.push({abs(arr[i]-x),arr[i]});
	if(pq.size()>k)
		pq.pop();
}
while(pq.size()>0){
	cout<<pq.top().second<<" ";
	pq.pop();
}

}

int main(){

	int n,k,x;
	cout<<"Enter no. of elements ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter value of K ";
    cin>>k;
    cout<<"Enter value of x ";
    cin>>x;
	KClosest(arr,n,k,x);
}
