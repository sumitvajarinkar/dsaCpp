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


5,6,7,8,9, k=3,x=7

abs diff	element
5-7=2			5
6-7=1			6
7-7=0			7
8-7=1			8
9-7=2			9

In max heap
abs diff   element
2             9
2             5
1			  8
1			  6
0 		      7

pop till k value here is 3
print 6,7,8


*/

#include<bits/stdc++.h>
using namespace std;

int KClosest(int arr[],int n,int k,int x){

// max heap to pop max differenece
priority_queue<pair<int,int>>pq;
for(int i=0;i<n;i++){
	pq.push({abs(arr[i]-x),arr[i]});

	//only k closest numbers
	if(pq.size()>k)
		pq.pop();
}

//To print elements
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
