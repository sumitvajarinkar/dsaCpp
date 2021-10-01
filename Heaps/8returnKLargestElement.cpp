/// Return K largest elements in Array
//O(n log k)

//Naive approach would be sort and traverse took O(n log n)
//Better approach will be like only take k size and proceed O(n log k) using max heap
/*
i/p:n=6, arr[]=7,10,4,3,20,15, k=3
o/p:10 15 20
*/

#include<bits/stdc++.h>
using namespace std;

int returnKlargest(int arr[],int n,int k){

// used min heap to find largest element
priority_queue<int,vector<int>,greater<int>>minh;
for(int i=0;i<n;i++){
	minh.push(arr[i]);

	//simply pop MIN element at top if size is > k
	if(minh.size()>k){
		minh.pop();
	}
}

//to print the last largest elements
while(minh.size()>0){
	cout<<minh.top()<<" ";
	minh.pop();
}
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
	returnKlargest(arr,n,k);
}

