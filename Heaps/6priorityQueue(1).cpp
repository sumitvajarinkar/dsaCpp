/// Priority Queue in STL C++ - Max heap (by default)

/*
basic operations :
push, pop : O(log n)

top :O(1)
*/

#include<iostream>
#include<queue>
using namespace std;

int main(){

///max heap(by default)
priority_queue<int>pq;

///min heap(need to modify max heap)
//priority_queue<int,vector<int>,greater<int>>pq;

pq.push(10);
pq.push(15);
pq.push(11);
pq.push(17);
pq.push(4);
pq.push(2);

cout<<"Size of Queue "<<pq.size();
cout<<"\nTop of Queue "<<pq.top()<<endl;
while(pq.empty()==false){
	cout<<pq.top()<<" ";
	pq.pop();
}
return 0;
}

