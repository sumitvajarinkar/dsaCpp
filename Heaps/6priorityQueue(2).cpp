/// Priority Queue in STL C++

/*
basic operations :
push, pop : O(log n)

top :O(1)
*/

#include<iostream>
#include<queue>
using namespace std;

int main(){
	int arr[]={10,4,3,2,15};

///max heap(by default)
//priority_queue<int>pq(arr,arr+5);

///min heap(need to modify max heap)
priority_queue<int,vector<int>,greater<int>>pq(arr,arr+5);

while(pq.empty()==false){
	cout<<pq.top()<<" ";
	pq.pop();
}
return 0;
}

