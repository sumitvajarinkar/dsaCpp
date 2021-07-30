//Implementation of unordered map
//map is a pair of (key,value)
//Map allows only distinct keys.
//In unordered there is different output in different machine as it is unordered ;D

#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_map<string,int>m;
m["Rahul"]=1;
m["Neha"]=2;
m.insert({"Avni",3});
//Traverse
cout<<"Key and values in map\n";
for(auto x:m)
	cout<<x.first<<" "<<x.second<<endl;
for(auto it=m.begin();it!=m.end();it++)
	cout<<it->first<<" "<<it->second<<endl;
//search
if(m.find("Rahul")!=m.end())
	cout<<"Found\n";
else
	cout<<"Not found\n";
if(m.count("Rahul"))
	cout<<"Found\n";
else
	cout<<"Not found\n";
//erase
cout<<"Size is :"<<m.size()<<endl;
m.erase(m.begin(),m.end());
cout<<"Size is :"<<m.size()<<endl;
//search
if(m.find("Rahul")!=m.end())
	cout<<"Found\n";
else
	cout<<"Not found\n";
return 0;
}
