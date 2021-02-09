//sort in Vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		v.push_back(i);
	sort(v.begin(),v.end()); //Increasing order
	for(int x:v)
		cout<<x;
	sort(v.begin(),v.end(),greater<int>()); //Decreasing order
	
	cout<<endl;
	for(int x:v)
		cout<<x<<" ";	
}
