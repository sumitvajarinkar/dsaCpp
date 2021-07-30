//Implementation of unordered set
//Set allows only distinct keys.
//In unordered there is different output in different machine as it is unordered ;D

#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_set<int>s;
s.insert(10);
s.insert(5);
s.insert(15);
s.insert(2);
//Traverse
cout<<"Elements in set\n";
for(int x:s)
	cout<<x<<" ";
cout<<"\nElements in set\n";
for(auto it=s.begin();it!=s.end();it++)
	cout<<*it<<" ";
cout<<endl;
//Search
if(s.find(15)==s.end())
	cout<<"Not found\n";
else
	cout<<"Found\n";
if(s.count(15))
	cout<<"Found\n";
else
	cout<<"Not found\n";
//Size
cout<<"Size :"<<s.size()<<endl;
//Erase
s.erase(15);
//Search
if(s.count(15))
	cout<<"Found\n";
else
	cout<<"Not found\n";
//Traverse
cout<<"Elements in set\n";
for(int x:s)
	cout<<x<<" ";
cout<<endl;
//Clear
s.clear();
//Size
cout<<"Size :"<<s.size();

return 0;
}
