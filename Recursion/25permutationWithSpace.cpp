///Permutation with spaces

//i/p: ABC
//o/p: A_B_C, A_BC, AB_C, ABC
/*
Recursive tree
		   ""    "ABC"
		       |
		       |
		 op1   | op2
		  "A" 	  "BC"
	 "A_B" "C"   "AB" "C"
A_B_C "" AB_C ""  AB_C "" ABC ""

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
op1.push_back('_');
op1.push_back(ip[0]);
op2.push_back(ip[0]);
ip.erase(ip.begin()+0);
solve(ip,op1);
solve(ip,op2);
}

int main(){
string ip;
cout<<"Enter a string\n";
cin>>ip;
string op="";

//one choice - ABC
op.push_back(ip[0]);

//op       ip
//""       ABC
//op       ip
//A        BC
ip.erase(ip.begin()+0);
solve(ip,op);
}
