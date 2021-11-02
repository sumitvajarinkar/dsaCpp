/// Print N digit binary #1s > #0s in Prefixes

/*
i/p:n=3
		  1s > 0s
op: 111   3    2
    110   4    1
    101   3    1

*/


#include<bits/stdc++.h>
using namespace std;

void solve(int one,int zero, int n, string op){
if(n==0){
	cout<<op<<endl;
	return;
}
string op1=op;
op1.push_back('1');
solve(one+1,zero,n-1,op1);

if(one>zero){
	string op2=op;
	op2.push_back('0');
	solve(one,zero+1,n-1,op2);
}
}

int main(){
int n;
cout<<"Enter count: \n";
cin>>n;
vector<string>v;
int one=0;
int zero=0;
string op="";
solve(one,zero,n,op);
for(auto x:v)
	cout<<x<<endl;
}

