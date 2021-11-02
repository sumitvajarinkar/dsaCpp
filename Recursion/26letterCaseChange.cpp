///Letter case change

//i/p: a1b2
//o/p: a1b2, a1B2, A1b2, A1B2
/*
Recursive tree
		  op       ip
		   ""    "a1b2"
		       |
		       |
		 op1   |     		   op2
	  "a" "1B2"      		"A" "1B2"
"a1" "B2"  "A1" "B2"     "A1b"       "B2"
"a1b" "2"  "a1B" "2"   "A1b" "2"    ""AB"   "2"

a1b2 ""      a1B2 ""      A1b2 ""      A1B2 ""
*/
#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op,vector<string> &v){
if(ip.length()==0){
	v.push_back(op);
	return;
}

//isalpha check, if element is alpha return 1 else 0
if(isalpha(ip[0])){
	string op1=op;
	string op2=op;
	op1.push_back(tolower(ip[0]));
	op2.push_back(toupper(ip[0]));

ip.erase(ip.begin()+0);
solve(ip,op1,v);
solve(ip,op2,v);
}
else{
	string op1=op;
	op1.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op1,v);
}
}
vector<string>fun(string s){
string ip=s;
string op="";
vector<string>v;
solve(ip,op,v);
for(auto x:v)
	cout<<x<<endl;

}

int main(){
string str;
cout<<"Enter a string\n";
cin>>str;
fun(str);

}
