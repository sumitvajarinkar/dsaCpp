///Permutation with Case(upper,lower) change
//i/p: ab
//o/p: ab, aB, Ab, AB
/*
Recursive tree
				""    "ab"
		            |
		            |
		    op1     |     op2
		  "a" "b" 	    "A" "b"
    "ab" ""  "aB" ""  "Ab" "" "AB" ""

*/
#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){
if(ip.length()==0){
	cout<<op<<endl;
	return;
}
//2 choices
string op1=op;
string op2=op;
//lower case
op1.push_back(ip[0]);
//upper case
op2.push_back(toupper(ip[0]));
//erase previous
ip.erase(ip.begin()+0);
solve(ip,op1);
solve(ip,op2);
}

int main(){
string ip;
cout<<"Enter a string\n";
cin>>ip;
string op="";
solve(ip,op);
}
