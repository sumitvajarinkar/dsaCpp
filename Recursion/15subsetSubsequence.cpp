//Print Subsets | Print PowerSets | Print all Subsequences

/*
i/p: "ab"
o/p: "" a b ab
i/p: "abc"
o/p: "" c b bc a ac ab abc

Number of subsets = 2^n
*/

#include<bits/stdc++.h>
using namespace std;

//GFG approach
/*
void subSets(string str,string curr,int i){
if(i==str.length()){
	cout<<curr<<" ";
	return;
}
subSets(str,curr,i+1);
subSets(str,curr+str[i],i+1);
}

int main(){
string s;
cin>>s;
subSets(s,"",0);

}
*/

//AV approach
void subSets(string s,string op){
if(s.length()==0)
{
	cout<<op<<" ";
	return;
}
string op1=op;
string op2=op;

op2.push_back(s[0]);
s.erase(s.begin()+0);

subSets(s,op1);
subSets(s,op2);
}

int main(){
string s,op="";
cin>>s;
subSets(s,op);

}

