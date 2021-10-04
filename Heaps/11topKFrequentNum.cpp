/// Top K Frequent Numbers
//O(n log k) O(n)

/*
i/p:n=7, arr[]=1,1,1,3,2,2,4, k=2
o/p:1,2(1 is 3 times, 2 is 2 times)

We need to print number whose frequency is top k.

map will store :
element frequency
	1  :	3
	2  :	2
	3  :	1
	4  :	1

now, push map elements in min heap as pair

pair<int,int> = pair<frequency,element>
frequency element
	1  :	4
	1  :	3
	2  :	2
	3  :	1

pop till heap size > k here k=2
print 1,2
*/

#include<bits/stdc++.h>
using namespace std;

int topKFrequent(int arr[],int n,int k){

//map frequency of elements
unordered_map<int,int>mp;
for(int i=0;i<n;i++)
	mp[arr[i]]++;

// used min heap to push min frequency at top
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
for(auto i=mp.begin();i!=mp.end();i++){
	minh.push({i->second,i->first});
	if(minh.size() > k)
		minh.pop();
}
//To print top k frequent element ( element store at second)
while(minh.size()>0){
	cout<<minh.top().second<<" ";
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
	cout<<"Enter value of K top number ";
    cin>>k;
	topKFrequent(arr,n,k);
}



